/*
 * This implementation replicates the implicit list implementation
 * provided in the textbook
 * "Computer Systems - A Programmer's Perspective"
 * Blocks are never coalesced or reused.
 * Realloc is implemented directly using mm_malloc and mm_free.
 *
 * NOTE TO STUDENTS: Replace this header comment with your own header
 * comment that gives a high level description of your solution.
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>

#include "mm.h"
#include "memlib.h"

/*********************************************************
 * NOTE TO STUDENTS: Before you do anything else, please
 * provide your team information in the following struct.
 ********************************************************/
team_t team = {
/* Team name */
"Basilisk",
/* First member's full name */
"Divya Dadlani",
/* First member's email address */
"divya.dadlani@mail.utoronto.ca",
/* Second member's full name (leave blank if none) */
"Geetika Saksena",
/* Second member's email address (leave blank if none) */
"geetika.saksena@mail.utoronto.ca" };

/*************************************************************************
 * Basic Constants and Macros
 * You are not required to use these macros but may find them helpful.
 *************************************************************************/
#define WSIZE       sizeof(void *)            /* word size (8 bytes on 64-bit) */
#define DSIZE       (2 * WSIZE)            /* doubleword size (16 bytes on 64-bit) */
#define CHUNKSIZE   (1<<12)      /* initial heap size (bytes) */

#define MAX(x,y) ((x) > (y)?(x) :(y))

/* Pack a size and allocated bit into a word */
#define PACK(size, alloc) ((size) | (alloc))

/* Read and write a word at address p */
#define GET(p)          (*(uintptr_t *)(p))
#define PUT(p,val)      (*(uintptr_t *)(p) = (val))

/* Read the size and allocated fields from address p */
#define GET_SIZE(p)     (GET(p) & ~(DSIZE - 1))
#define GET_ALLOC(p)    (GET(p) & 0x1)

/* Given block ptr bp, compute address of its header and footer */
#define HDRP(bp)        ((char *)(bp) - WSIZE)
#define FTRP(bp)        ((char *)(bp) + GET_SIZE(HDRP(bp)) - DSIZE)

/* Given block ptr bp, compute address of next and previous blocks */
#define NEXT_BLKP(bp) ((char *)(bp) + GET_SIZE(((char *)(bp) - WSIZE)))
#define PREV_BLKP(bp) ((char *)(bp) - GET_SIZE(((char *)(bp) - DSIZE)))

/* Given free block ptr fbp, compute address of next and previous blocks
 * of that fit in the free list
 */
#define PREV_FREE_BLKP(fbp) (*(void **) (fbp))
#define NEXT_FREE_BLKP(fbp) (*(void **) (fbp+WSIZE))

#define SET_PREV_FREE_BLKP(fbp, val) (*(void **) (fbp) = val)
#define SET_NEXT_FREE_BLKP(fbp, val) (*(void **) (fbp+WSIZE) = val)

#define INITIAL_HEAP_SIZE 512
#define MAX_INTERNAL_FRAGMENTATION (1*DSIZE)

void* heap_listp = NULL;

// Number of double words currently in the heap
int heap_length = INITIAL_HEAP_SIZE;

/*Explicit Free List*/
void *free_list_head = NULL;

void trim_free_block(void *bp, void *new_bp, size_t new_size);

void remove_from_free_list(void *bp);

void add_to_free_list(void *bp);

void print_free_list();

/**********************************************************
 * mm_init
 * Initialize the heap, including "allocation" of the
 * prologue and epilogue. At initialization, we create
 * one heap block of size INITIAL_HEAP_SIZE, which is
 * the block size held in the second last element of
 * free_lists.
 **********************************************************/
int mm_init(void) {

	if ((heap_listp = mem_sbrk((heap_length + 2) * DSIZE)) == (void *) -1)
		return -1;

	/*
	 _______________________________________________
	 |0x1|H|P|N|_______________________________|F|0x1|
	 W   W W W                                 W  W
	 |<--heap_len * dsize--------------->|
	 |  (PAYLOAD of first FREE BLOCK)
	 v
	 heap_listp (at the end of init call)
	 */

	// alignment & prologue
	PUT(heap_listp, 1);
	// header containing size of block
	PUT(heap_listp + WSIZE, PACK((heap_length * DSIZE + DSIZE), 0));
	// set previous & next free block pointer
	SET_PREV_FREE_BLKP(heap_listp + DSIZE, 0);
	SET_NEXT_FREE_BLKP(heap_listp + DSIZE, 0);
	// footer containing size of block
	PUT(heap_listp + (heap_length * DSIZE + DSIZE),
			PACK((heap_length * DSIZE + DSIZE),0));
	// alignment & epilogue
	PUT(heap_listp + ((heap_length * DSIZE + DSIZE) + WSIZE), 1);

	// heap_listp starts at payload of first (huge) block
	// heap_listp  is now a big free block
	heap_listp += DSIZE;
	// include header and footer
	heap_length += 1;

	// add first free block to list
	free_list_head = heap_listp;

	// printf("heap_listp: %p\n", heap_listp);
	//print_free_list();
	return 0;
}

/**********************************************************
 * coalesce
 * Covers the 4 cases discussed in the text:
 * - both neighbours are allocated
 * - the next block is available for coalescing
 * - the previous block is available for coalescing
 * - both neighbours are available for coalescing
 **********************************************************/
void *coalesce(void *bp) {
	int prev_alloc;
	// Case where previous block is prologue
	if (bp == heap_listp) {
		prev_alloc = 1;
	} else {
		prev_alloc = GET_ALLOC(FTRP(PREV_BLKP(bp)));
	}
	int next_alloc = GET_ALLOC(HDRP(NEXT_BLKP(bp)));
	size_t size = GET_SIZE(HDRP(bp));

	// printf("Coalesce: size1: %u\n",(unsigned int) size);
	void *coalesced_bp = NULL;

	if (prev_alloc && next_alloc) { /* Case 1 */
		coalesced_bp = bp;
	}

	else if (prev_alloc && !next_alloc) { /* Case 2 */
		remove_from_free_list(NEXT_BLKP(bp));
		//assert(GET_SIZE(HDRP(NEXT_BLKP(bp))) > DSIZE);
		size += GET_SIZE(HDRP(NEXT_BLKP(bp)));
		PUT(HDRP(bp), PACK(size, 0));
		PUT(FTRP(bp), PACK(size, 0));
		coalesced_bp = bp;
	}

	else if (!prev_alloc && next_alloc) { /* Case 3 */
		remove_from_free_list(PREV_BLKP(bp));
		//assert(GET_SIZE(HDRP(PREV_BLKP(bp))) > DSIZE);
		size += GET_SIZE(HDRP(PREV_BLKP(bp)));
		PUT(FTRP(bp), PACK(size, 0));
		PUT(HDRP(PREV_BLKP(bp)), PACK(size, 0));
		coalesced_bp = PREV_BLKP(bp);
	}

	else { /* Case 4 */
		//account for size 16 external fragmentation which isn't in the free list
		int size_prev = GET_SIZE(HDRP(PREV_BLKP(bp)));
		int size_next = GET_SIZE(FTRP(NEXT_BLKP(bp)));

		remove_from_free_list(PREV_BLKP(bp));
		remove_from_free_list(NEXT_BLKP(bp));
		//assert(size_prev > DSIZE && size_next > DSIZE);
		size += size_prev + size_next;
		PUT(HDRP(PREV_BLKP(bp)), PACK(size,0));
		PUT(FTRP(NEXT_BLKP(bp)), PACK(size,0));
		coalesced_bp = PREV_BLKP(bp);
	}
	add_to_free_list(coalesced_bp);
	// printf("Coalesced into size: %u, addr: %p\n",(unsigned int) size, (int*)coalesced_bp);
	return coalesced_bp;
}

/**********************************************************
 * extend_heap
 * Extend the heap by "words" words, maintaining alignment
 * requirements of course. Free the former epilogue block
 * and reallocate its new header
 **********************************************************/
void *extend_heap(size_t words) {
	// printf("Entered extend heap\n");

	char *bp;
	size_t size;

	/* Allocate an even number of words to maintain alignments */
	size = (words % 2) ? (words + 1) * WSIZE : words * WSIZE;

	/* Find the size of the last block in the heap (if free) */
	void* last_block_ftrp = heap_listp + (heap_length * DSIZE - DSIZE);
	if (GET_ALLOC(last_block_ftrp) == 0) {
		// use last free block size for allocation as well
		size -= GET_SIZE(last_block_ftrp);
	}
	assert((size % 4) == 0);

	if ((bp = mem_sbrk(size)) == (void *) -1)
		return NULL;

	/* Initialize free block header/footer and the epilogue header */
	PUT(HDRP(bp), PACK(size, 0)); // free block header (overwrites old epilogue)
	PUT(FTRP(bp), PACK(size, 0));                // free block footer
	PUT(HDRP(NEXT_BLKP(bp)), PACK(0, 1));        // new epilogue header
	heap_length += (size >> 4);
	// printf("Exiting extend heap, new heap_length: %d\n", heap_length);
	/* Coalesce if the previous block was free */
	void* coalesced_bp = coalesce(bp);

	// printf("Exited extend heap\n");
	//print_free_list();
	return coalesced_bp;

}

/**********************************************************
 * find_fit
 * Traverse the free list searching for a block to fit asize
 * Using CLOSE FIT
 * Return NULL if no free blocks can handle that size
 * Assumed that asize is aligned
 **********************************************************/
void * find_fit(size_t asize) {
	// look in the largest block range to find a fit
	void *cur_blkp = free_list_head;
	int cur_size_diff;

	while (cur_blkp != NULL) {
		cur_size_diff = (GET_SIZE(HDRP(cur_blkp)) - (int) asize);
		if (cur_size_diff >= 0) {
			return cur_blkp;
		}
		cur_blkp = NEXT_FREE_BLKP(cur_blkp);
	}
	return NULL;
}

/**********************************************************
 * place
 * Mark the block as allocated
 **********************************************************/
void place(void* bp, size_t asize) {

	PUT(HDRP(bp), PACK(asize, 1));
	PUT(FTRP(bp), PACK(asize, 1));
}

/**********************************************************
 * mm_free
 * Free the block and coalesce with neighbouring blocks
 **********************************************************/
void mm_free(void *bp) {
	// printf("Freeing block %p of size %lu\n", bp, GET_SIZE(HDRP(bp)));
	if (bp == NULL) {
		return;
	}
	size_t size = GET_SIZE(HDRP(bp));
	PUT(HDRP(bp), PACK(size,0));
	PUT(FTRP(bp), PACK(size,0));

	bp = coalesce(bp);

	// printf("Exiting free\n");
	//print_free_list();
}

/**********************************************************
 * mm_malloc
 * Allocate a block of size bytes.
 * The type of search is determined by find_fit
 * The decision of splitting the block, or not is determined
 *   in place(..)
 * If no block satisfies the request, the heap is extended
 **********************************************************/
void *mm_malloc(size_t size) {
	// printf("Entering malloc\n");

	size_t asize; /* adjusted block size in bytes */
	size_t extendsize; /* amount to extend heap if no fit */
	char * bp;

	/* Ignore spurious requests */
	if (size == 0)
		return NULL;

	/* Adjust block size to include overhead and alignment reqs. */
	if (size <= DSIZE)
		asize = 2 * DSIZE;
	else
		asize = DSIZE * ((size + (DSIZE) + (DSIZE - 1)) / DSIZE);

//	printf("Asize: %u\n", (unsigned int) asize);

	/* Search the free list for a fit */
	bp = find_fit(asize);
	if (bp == NULL) {
		/* No fit found. Get more memory and place the block */
		extendsize = MAX(asize, CHUNKSIZE);
		bp = extend_heap(extendsize / WSIZE);

		if (bp == NULL)
			return NULL;
	}

	size_t free_blk_size = GET_SIZE(HDRP(bp));
	int remaining_free_blk_size = (int) (free_blk_size - asize);

	assert(remaining_free_blk_size >= 0);

	if (remaining_free_blk_size > MAX_INTERNAL_FRAGMENTATION) {
		/*split free block*/
		void *split_bp = bp + asize;
		trim_free_block(bp, split_bp, remaining_free_blk_size);
		// malloc remaining asize
		place(bp, asize);
	} else {
		/* malloc complete free block*/
		remove_from_free_list(bp);
		place(bp, free_blk_size);
	}
//		 printf("ERROR WITH HEAP!!\n");

//	printf("Exiting malloc\n");
	//print_free_list();
	return bp;
}

/**********************************************************
 * mm_realloc
 * Implemented simply in terms of mm_malloc and mm_free
 *********************************************************/
void *mm_realloc(void *ptr, size_t size) {
	/* If size == 0 then this is just free, and we return NULL. */
	if (size == 0) {
		mm_free(ptr);
		return NULL;
	}
	/* If oldptr is NULL, then this is just malloc. */
	if (ptr == NULL) {
		return (mm_malloc(size));
	}

	void *oldptr = ptr;
	void *newptr;
	size_t old_size = GET_SIZE(HDRP(oldptr));
	size_t new_size = DSIZE * ((size + (DSIZE) + (DSIZE-1))/ DSIZE);

	/* If size requested is the same as before, return old pointer*/
	if (new_size <= old_size ) {
		return oldptr;
/*	} else if (new_size < (old_size - DSIZE)) {
		newptr = ptr + new_size;
		PUT(HDRP(newptr), PACK((old_size - new_size), 0));
		PUT(FTRP(newptr), PACK((old_size - new_size), 0));
		place(oldptr, new_size);
		add_to_free_list(newptr);
		return oldptr;*/
	} else {
		void* next_blkp = NEXT_BLKP(oldptr);
		if (!GET_ALLOC(HDRP(next_blkp))) {
				size_t combined_size = old_size + GET_SIZE(HDRP(next_blkp));
				if (combined_size >= new_size) {
					remove_from_free_list(next_blkp);
					place(oldptr, combined_size);
					assert(GET_SIZE(HDRP(oldptr)) == combined_size);
					return oldptr;
				}
			}
		else {
			// If above condition doesn't meet, allocate new block, copy over contents, free old block
			newptr = mm_malloc(size);
			if (newptr == NULL) {
				// printf("Exiting realloc out of mem\n");
				return NULL;
			}

			/* Copy the old data. */
			memcpy(newptr, oldptr, old_size);
			mm_free(oldptr);
			return newptr;
		}
	}
	
	return NULL;
}

/**********************************************************
 * mm_check
 * This assumes mm_init has already been called
 * Check the consistency of the memory heap
 * Return nonzero if the heap is consistent.
 *********************************************************/
int mm_check(void){
	 // printf("CHECKING HEAP...\n");
	int num_free_blks_heap = 0;
	int num_free_blks_list = 0;
	/* Traverse the heap */
	void *cur_blkp = heap_listp;
	// check for prologue
	if(!((GET_ALLOC(cur_blkp - DSIZE) == 1) && (GET_SIZE(cur_blkp - DSIZE) == 0))) {printf("ERROR: prologue not valid\n");return -1;}

	while (cur_blkp) {
		size_t blk_size = GET_SIZE(HDRP(cur_blkp));
		int blk_alloc = GET_ALLOC(HDRP(cur_blkp));
		if (blk_size == 0) {
			// verify that this is epilogue
			if(blk_alloc != 1) {printf("ERROR: free blk of size 0 present in heap\n");return -1;}
			if((cur_blkp != (heap_listp + heap_length*DSIZE))) {printf("ERROR: allocated blk of size 0 present in heap\n");return -1;}
			break;
		}
		// check if size of block is valid
		if(blk_size % 4 != 0) {printf("ERROR: blk size not aligned to double words\n");return -1;}
		if(blk_size < 2*DSIZE) {printf("ERROR: blk size less than 2 double words\n");return -1;}
		// verify that header and footer of block has same size and allocation
		if(blk_size != GET_SIZE(FTRP(cur_blkp))) {printf("ERROR: header and footer have different sizes\n");return -1;}
		if(blk_alloc != GET_ALLOC(FTRP(cur_blkp))) {printf("ERROR: header and footer have different alloc bits\n");return -1;}

		if (!blk_alloc) {
			// free block
			num_free_blks_heap ++;
			void *cur_free_listp = free_list_head;
			while (cur_free_listp && cur_free_listp != cur_blkp) {
				if(cur_free_listp == NEXT_FREE_BLKP(cur_free_listp)) {printf("ERROR: free block points to itself\n");return -1;}
				if(cur_free_listp > NEXT_FREE_BLKP(cur_free_listp)) {printf("ERROR: free blocks are not address ordered\n");return -1;}
				cur_free_listp = NEXT_FREE_BLKP(cur_free_listp);
			}
			// check if all free blocks are in free list
			if(cur_free_listp != cur_blkp) {printf("ERROR: block in heap not in free list\n");return -1;}
			// check if contiguous blocks have been coalesced
			if (PREV_FREE_BLKP(cur_blkp))
				if(GET_ALLOC(PREV_FREE_BLKP(cur_blkp)) == 1) {printf("ERROR: adjacent blocks are free but not coalesced.\n");return -1;}
		}
		cur_blkp = (void*)NEXT_BLKP(cur_blkp);
	}

	/* Traverse the free list */
	void *cur_free_listp = free_list_head;
	// check if every block in free list is marked as free in the heap
	while (cur_free_listp) {
		if(GET_ALLOC(HDRP(cur_free_listp)) != 0) {printf("ERROR: block in free list not marked free in heap\n");return -1;}
		num_free_blks_list++;
		cur_free_listp = NEXT_FREE_BLKP(cur_free_listp);
	}
	if(num_free_blks_heap != num_free_blks_list) {printf("ERROR: number of free blocks in free list not the same as heap\n");return -1;}
	return 1;
 }

void print_free_list() {
	// printf("\n******* PRINTING FREE LIST *******\n");
	void* cur_bp = free_list_head;
	int i = 0;
	while (cur_bp != NULL) {
		// printf("%d: %p: size: %lu \n", i, cur_bp, GET_SIZE(HDRP(cur_bp)));
		cur_bp = NEXT_FREE_BLKP(cur_bp);
		i++;
	}
}

/*
 * update free block header, footer and move pointers to new position of free block
 */
void trim_free_block(void* bp, void *new_bp, size_t new_size) {
	// update free block header, footer and move pointers to new position of free block
	PUT(HDRP(new_bp), PACK(new_size, 0));
	//SET_PREV_FREE_BLKP(new_bp, PREV_FREE_BLKP(bp));
	//SET_NEXT_FREE_BLKP(new_bp, NEXT_FREE_BLKP(bp));
	PUT(FTRP(new_bp), PACK(new_size, 0));
	/* if (bp == free_list_head) {
		free_list_head = new_bp;
	} else {
		SET_NEXT_FREE_BLKP(	
	} */
	remove_from_free_list(bp);
	add_to_free_list(new_bp);
}

void remove_from_free_list(void *bp) {
	// printf("Removing %p from free list\n",bp);
	void *prev_bp = PREV_FREE_BLKP(bp);
	void *next_bp = NEXT_FREE_BLKP(bp);
	if (prev_bp == NULL) {
		// remove block from head of list (may be only block)
		free_list_head = next_bp;
		if (next_bp != NULL)
			SET_PREV_FREE_BLKP(next_bp, NULL);
	} else if (next_bp == NULL) {
		// remove block from end of list
		SET_NEXT_FREE_BLKP(prev_bp, next_bp);
	} else {
		// printf("prev: %p, next: %p\n",prev_bp, next_bp);
		// remove block from middle
		SET_NEXT_FREE_BLKP(prev_bp, next_bp);
		SET_PREV_FREE_BLKP(next_bp, prev_bp);
	}
}
/*
void add_to_free_list(void *bp) {
	void* cur_bp = free_list_head;
	void* prev_bp = NULL;
	while (cur_bp != NULL && bp > cur_bp) {
		assert(bp != cur_bp);
		prev_bp = cur_bp;
		cur_bp = NEXT_FREE_BLKP(cur_bp);
	}
	if (prev_bp == NULL) {
		// insert at head : either cur_bp = null or bp's addr less than first free block
		// set bp's prev and next pointers
		SET_NEXT_FREE_BLKP(bp, free_list_head);
		SET_PREV_FREE_BLKP(bp, NULL);
		// set second block's prev pointer
		if (free_list_head != NULL)
			SET_PREV_FREE_BLKP(free_list_head, bp);
		free_list_head = bp;
	} else if (cur_bp == NULL) {
		// insert at end
		// set bp's prev and next pointers
		SET_NEXT_FREE_BLKP(bp, NULL);
		SET_PREV_FREE_BLKP(bp, prev_bp);
		// set next of previously last block
		SET_NEXT_FREE_BLKP(prev_bp, bp);
	} else {
		// insert in middle
		void *next_bp = NEXT_FREE_BLKP(prev_bp);
		// set bp's prev and next pointers
		SET_NEXT_FREE_BLKP(bp, next_bp);
		SET_PREV_FREE_BLKP(bp, prev_bp);
		// set prev's next pointer
		SET_NEXT_FREE_BLKP(prev_bp, bp);
		// set next's prev pointer
		SET_PREV_FREE_BLKP(next_bp, bp);
	}

}*/

// Insert address at head

void add_to_free_list(void *bp) {
	SET_NEXT_FREE_BLKP(bp, free_list_head);
	SET_PREV_FREE_BLKP(bp, NULL);
	if (free_list_head != NULL)
				SET_PREV_FREE_BLKP(free_list_head, bp);
	free_list_head = bp;
}

