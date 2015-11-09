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
#define MAX_INTERNAL_FRAGMENTATION (3*DSIZE)

void* heap_listp = NULL;

// Number of double words currently in the heap
int heap_length = INITIAL_HEAP_SIZE;

// Segregated free list
// each element of the free_list contains 2^i double-word sized blocks
// last element contains all blocks larger than 512 dwords
//void *free_lists[FREE_LIST_SIZE];
//unsigned int num_free_blocks[FREE_LIST_SIZE];

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

	printf("heap_listp: %p\n", heap_listp);
	print_free_list();
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
		// account for size 16 external fragmentation which isn't in the free list
//		if (GET_SIZE(HDRP(NEXT_BLKP(bp))) != DSIZE) {
//			assert(remove_from_free_list(NEXT_BLKP(bp)));
//		}
		remove_from_free_list(NEXT_BLKP(bp));
		assert(GET_SIZE(HDRP(NEXT_BLKP(bp))) > DSIZE);
		size += GET_SIZE(HDRP(NEXT_BLKP(bp)));
		PUT(HDRP(bp), PACK(size, 0));
		PUT(FTRP(bp), PACK(size, 0));
		coalesced_bp = bp;
	}

	else if (!prev_alloc && next_alloc) { /* Case 3 */
		// account for size 16 external fragmentation which isn't in the free list
//		if (GET_SIZE(HDRP(PREV_BLKP(bp))) != DSIZE) {
//			void * if_free = remove_from_free_list(PREV_BLKP(bp));
//			assert(if_free);
//		}
		remove_from_free_list(PREV_BLKP(bp));
		assert(GET_SIZE(HDRP(PREV_BLKP(bp))) > DSIZE);
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
		assert(size_prev > DSIZE && size_next > DSIZE);
//		if (size_prev != DSIZE)
//			assert(remove_from_free_list(PREV_BLKP(bp)));
//		if (size_next != DSIZE)
//			assert(remove_from_free_list(NEXT_BLKP(bp)));

		size += size_prev + size_next;
		// printf("Coalesce: size_p: %u\n",(unsigned int) size_prev);
		// printf("Coalesce: size_n: %u\n",(unsigned int) size_next);
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
	printf("Entered extend heap\n");

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

	printf("Exited extend heap\n");
	print_free_list();
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
	void *best_fit_blkp = NULL;
	void *cur_blkp = free_list_head;
	int least_size_diff = 99999999, cur_size_diff;

	while (cur_blkp != NULL) {
		cur_size_diff = GET_SIZE(HDRP(cur_blkp)) - asize;
		printf("cur_size_diff: %d\n", cur_size_diff);
		if (cur_size_diff == 0) {
			// found the exact fit
			printf("FOUND EXACT FIT");
			best_fit_blkp = cur_blkp;
			least_size_diff = 0;
			break;
		} else if (cur_size_diff > 0) {
			if ((best_fit_blkp == NULL) || (cur_size_diff < least_size_diff)) {
				// we don't have a previous best fit or this block fits better than our previous best fit block
				printf("this block fits better than our previous best fit block\n");
				best_fit_blkp = cur_blkp;
				least_size_diff = cur_size_diff;
			}
		}
		cur_blkp = NEXT_FREE_BLKP(cur_blkp);
	}
	return best_fit_blkp;
}

/**********************************************************
 * place
 * Mark the block as allocated
 **********************************************************/
void place(void* bp, size_t asize) {
//  /* Get the current block size */
//  size_t bsize = GET_SIZE(HDRP(bp));

	PUT(HDRP(bp), PACK(asize, 1));
	PUT(FTRP(bp), PACK(asize, 1));
}

/**********************************************************
 * mm_free
 * Free the block and coalesce with neighbouring blocks
 **********************************************************/
void mm_free(void *bp) {
	printf("Freeing block %p of size %lu\n", bp, GET_SIZE(HDRP(bp)));
	if (bp == NULL) {
		return;
	}
	size_t size = GET_SIZE(HDRP(bp));
	PUT(HDRP(bp), PACK(size,0));
	PUT(FTRP(bp), PACK(size,0));

	bp = coalesce(bp);

	printf("Exiting free\n");
	print_free_list();

	//mm_check();
	//	 printf("ERROR IN HEAP after free bp = %p size = %lu\n ", (int*) bp, GET_SIZE(HDRP(bp)));
	//}
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
	//mm_check();
//		 printf("ERROR WITH HEAP!!\n");
	printf("Entering malloc\n");

	// return (num_dwords <= INITIAL_HEAP_SIZE) ? extend_heap(INITIAL_HEAP_SIZE * 2) : extend_heap(num_dwords * 2);
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

	printf("Asize: %u\n", (unsigned int) asize);

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
	// printf("GET_SIZE(HDRP(bp)): %lu\n",GET_SIZE(HDRP(bp)));
	printf("free_blk_size: %u\n",(unsigned int)free_blk_size);
	// printf("bp: %p\n",bp);
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
	//mm_check();
//		 printf("ERROR WITH HEAP!!\n");

	printf("Exiting malloc\n");
	print_free_list();
	return bp;
}

/**********************************************************
 * mm_realloc
 * Implemented simply in terms of mm_malloc and mm_free
 *********************************************************/
void *mm_realloc(void *ptr, size_t size) {
	printf("Entering realloc\n");
	/* If size == 0 then this is just free, and we return NULL. */
	if (size == 0) {
		mm_free(ptr);
		printf("Exiting realloc free\n");
		return NULL;
	}
	/* If oldptr is NULL, then this is just malloc. */
	if (ptr == NULL) {
		printf("Exiting realloc malloc \n");
		return (mm_malloc(size));
	}

	void *oldptr = ptr;
	void *newptr;
	size_t copySize = GET_SIZE(HDRP(oldptr));

	/* If size requested is the same as before, return old pointer*/
	if (copySize == size) {
		return oldptr;
	}

	newptr = mm_malloc(size);
	if (newptr == NULL) {
		printf("Exiting realloc out of mem\n");
		return NULL;
	}

	/* Copy the old data. */
	if (size < copySize)
		copySize = size;
	memcpy(newptr, oldptr, copySize);
	mm_free(oldptr);
	printf("Exiting realloc done\n");
	print_free_list();
	return newptr;
}

/**********************************************************
 * mm_check
 * Check the consistency of the memory heap
 * Return nonzero if the heap is consistent.
 *********************************************************/
/*int mm_check(void){

 // printf("CHECKING HEAP\n");
 int num_blk = 0;
 void * cur_blkp = heap_listp;

 int lc1 = 0;
 // check if all free blocks are in the free list array
 while (cur_blkp != NULL && *(int *)cur_blkp != 1) {

 // printf("Entered loop 1\n");
 //		lc1++;
 //		if (lc1 > 1500)
 //			exit(-1);
 size_t size = GET_SIZE(HDRP(cur_blkp));
 size_t alloc = GET_ALLOC(HDRP(cur_blkp));
 if (size == 0)
 break;
 //		// printf("Block %d: Size = %u, Allocated = %u, Address = %p\n",num_blk, (unsigned int) size, (unsigned int) alloc, cur_blkp);
 num_blk++;
 if (alloc) {
 // add these checks later
 }
 else {
 //payload of the free block
 unsigned int payload_size = (size - DSIZE) >> 4;
 if (__builtin_popcount(payload_size) > 1) {
 // size is not a power of 2
 // printf("ERROR: Free block payload size is %u\n",payload_size);
 return 0;
 }
 void *head = free_lists[get_array_position_malloc(payload_size)];
 // int lc2 = 0;
 while (head != NULL) {
 // printf("Entered loop 2\n");
 //				lc2++;
 //					if (lc2 > 1000)
 //						exit(-1);
 if (head == cur_blkp)
 break;
 // address of next free block in linked list should
 // be located at head
 // printf("head: %p index: %d\n", head, get_array_position_malloc(payload_size));
 head = NEXT_FREE_BLKP(head);
 }
 // lc2 = 0;
 // head was not found in the linked list at free_lists[i]
 if ((size > DSIZE) && (head == NULL)) {
 printf("ERROR: Free block %p was not found at free_list[%d]\n",head, get_array_position_malloc(payload_size));
 return 0;
 }
 }
 cur_blkp = NEXT_BLKP(cur_blkp);
 // printf("cur_blkp in heap: %p, size of block: %u", (int * ) cur_blkp, (unsigned int) GET_SIZE(HDRP(cur_blkp)));
 }
 // all blocks correctly accounted for
 return 1;
 }*/

void print_free_list() {
	printf("\n******* PRINTING FREE LIST *******\n");
	void* cur_bp = free_list_head;
	int i = 0;
	while (cur_bp != NULL) {
		printf("%d: %p: size: %lu \n", i, cur_bp, GET_SIZE(HDRP(cur_bp)));
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
	SET_PREV_FREE_BLKP(new_bp, PREV_FREE_BLKP(bp));
	SET_NEXT_FREE_BLKP(new_bp, NEXT_FREE_BLKP(bp));
	PUT(FTRP(new_bp), PACK(new_size, 0));
	if (bp == free_list_head) {
		free_list_head = new_bp;
	}
}

void remove_from_free_list(void *bp) {
	printf("Removing %p from free list\n",bp);
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
		printf("prev: %p, next: %p\n",prev_bp, next_bp);
		// remove block from middle
		SET_NEXT_FREE_BLKP(prev_bp, next_bp);
		SET_PREV_FREE_BLKP(next_bp, prev_bp);
	}
}

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

}

// Insert address at head

//void add_to_free_list(void *bp, int index) {
//	PUT(bp, (uintptr_t) free_lists[index]);
//	if (*(uintptr_t*)bp == 0) {
//		// printf("BP's next is now null\n");
//	}
//	free_lists[index] = bp;
//}

