/*
 * This code implements an explicit list
 * A fit for allocation is found using first fit
 * Each new free block is inserted at the head of the free list
 * Blocks are coalesced at every call to mm_free and
 * occasionally in extend_heap
 * Realloc only allocates new block if the new size is greater
 * than old size
 * If the next block in the heap is free, realloc will attempt
 * to coalesce with that next block
 * The following diagram shows the heap after mm_init
 *	 ________________________________________________
 *	 |Pro|H|P|N|_______________________________|F|Epi|
 *	   W  W W W                                 W  W
 *	 	   |<--------heap_len * dsize--------->|
 *	 	   |  (PAYLOAD of first FREE BLOCK)    |
 *	 	   v
 *	 heap_listp (at the end of init call)
 *
 *  where H = header
 *  	  P = previous free block pointer
 *  	  N = next free block pointer
 *  	  F = footer
 *
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
#define WSIZE       sizeof(void *)          /* word size (8 bytes on 64-bit) */
#define DSIZE       (2 * WSIZE)             /* doubleword size (16 bytes on 64-bit) */
#define CHUNKSIZE   (1<<12)      			/* initial heap size (bytes) */

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

/* Given free block ptr fbp, compute address of next and previous blocks in the free list */
#define PREV_FREE_BLKP(fbp) (*(void **) (fbp))
#define NEXT_FREE_BLKP(fbp) (*(void **) (fbp+WSIZE))

/* Set addresses of next and previous free blocks in the free block */
#define SET_PREV_FREE_BLKP(fbp, val) (*(void **) (fbp) = val)
#define SET_NEXT_FREE_BLKP(fbp, val) (*(void **) (fbp+WSIZE) = val)

/* Head block of heap */
void* heap_listp = NULL;

/* Number of double words currently in the heap */
int heap_length_dw = CHUNKSIZE >> 4;

/* Explicit Free List */
void *free_list_head = NULL;

/* Function Declarations */
void trim_free_block(void *bp, void *new_bp, size_t new_size);
void remove_from_free_list(void *bp);
void add_to_free_list(void *bp);
void print_free_list();

/**********************************************************
 * mm_init
 * Initialize the heap, including "allocation" of the
 * prologue and epilogue
 * At initialization, we create one heap block of payload
 * size CHUNKSIZE which we add to the explicit free list
 **********************************************************/
int mm_init(void) {

	if ((heap_listp = mem_sbrk((heap_length_dw + 2) * DSIZE)) == (void *) -1)
		return -1;

	// alignment & prologue
	PUT(heap_listp, 1);
	// header containing size of block
	PUT(heap_listp + WSIZE, PACK((heap_length_dw * DSIZE + DSIZE), 0));
	// previous & next free block pointer
	SET_PREV_FREE_BLKP(heap_listp + DSIZE, 0);
	SET_NEXT_FREE_BLKP(heap_listp + DSIZE, 0);
	// footer containing size of block
	PUT(heap_listp + (heap_length_dw * DSIZE + DSIZE),
			PACK((heap_length_dw * DSIZE + DSIZE),0));
	// alignment & epilogue
	PUT(heap_listp + ((heap_length_dw * DSIZE + DSIZE) + WSIZE), 1);

	// heap_listp starts at payload of first block
	heap_listp += DSIZE;
	// include header and footer in heap length
	heap_length_dw += 1;

	// add first free block to explicit free list
	free_list_head = heap_listp;

	return 0;
}

/**********************************************************
 * coalesce
 * Removes blocks from the free list that are about
 * to be coalesced. Adds coalesced block to free list
 * Covers the 4 cases discussed in the text:
 * - both neighbours are allocated
 * - the next block is available for coalescing
 * - the previous block is available for coalescing
 * - both neighbours are available for coalescing
 **********************************************************/
void *coalesce(void *bp) {

	int prev_alloc;

	if (bp == heap_listp) {
		// Case where previous block is prologue
		prev_alloc = 1;
	} else {
		prev_alloc = GET_ALLOC(FTRP(PREV_BLKP(bp)));
	}

	int next_alloc = GET_ALLOC(HDRP(NEXT_BLKP(bp)));
	size_t size = GET_SIZE(HDRP(bp));

	void *coalesced_bp = NULL;

	if (prev_alloc && next_alloc) { /* Case 1 */
		coalesced_bp = bp;
	}

	else if (prev_alloc && !next_alloc) { /* Case 2 */
		remove_from_free_list(NEXT_BLKP(bp));
		assert(GET_SIZE(HDRP(NEXT_BLKP(bp))) > DSIZE);
		size += GET_SIZE(HDRP(NEXT_BLKP(bp)));
		PUT(HDRP(bp), PACK(size, 0));
		PUT(FTRP(bp), PACK(size, 0));
		coalesced_bp = bp;
	}

	else if (!prev_alloc && next_alloc) { /* Case 3 */
		remove_from_free_list(PREV_BLKP(bp));
		assert(GET_SIZE(HDRP(PREV_BLKP(bp))) > DSIZE);
		size += GET_SIZE(HDRP(PREV_BLKP(bp)));
		PUT(FTRP(bp), PACK(size, 0));
		PUT(HDRP(PREV_BLKP(bp)), PACK(size, 0));
		coalesced_bp = PREV_BLKP(bp);
	}

	else { /* Case 4 */
		int size_prev = GET_SIZE(HDRP(PREV_BLKP(bp)));
		int size_next = GET_SIZE(FTRP(NEXT_BLKP(bp)));
		remove_from_free_list(PREV_BLKP(bp));
		remove_from_free_list(NEXT_BLKP(bp));
		assert(size_prev > DSIZE && size_next > DSIZE);
		size += size_prev + size_next;
		PUT(HDRP(PREV_BLKP(bp)), PACK(size,0));
		PUT(FTRP(NEXT_BLKP(bp)), PACK(size,0));
		coalesced_bp = PREV_BLKP(bp);
	}
	add_to_free_list(coalesced_bp);
	return coalesced_bp;
}

/**********************************************************
 * extend_heap
 * Extend the heap by "words" words, maintaining alignment
 * requirements of course
 * Checks if last block in heap is free
 * If so, extend by lesser amount by coalescing last
 * block with new mem_sbrk block
 * Free the former epilogue block and reallocate its new
 * header
 **********************************************************/
void *extend_heap(size_t words) {

	char *bp;
	size_t size;

	/* Allocate an even number of words to maintain alignments */
	size = (words % 2) ? (words + 1) * WSIZE : words * WSIZE;

	/* Find the size of the last block in the heap (if free) */
	void* last_block_ftrp = heap_listp + (heap_length_dw * DSIZE - DSIZE);
	if (GET_ALLOC(last_block_ftrp) == 0) {
		// use last free block size for allocation as well
		size -= GET_SIZE(last_block_ftrp);
	}
	assert((size % 4) == 0);

	if ((bp = mem_sbrk(size)) == (void *) -1)
		return NULL;

	/* Initialize free block header/footer and the epilogue header */
	PUT(HDRP(bp), PACK(size, 0)); // free block header (overwrites old epilogue)
	PUT(FTRP(bp), PACK(size, 0)); // free block footer
	PUT(HDRP(NEXT_BLKP(bp)), PACK(0, 1)); // new epilogue header
	heap_length_dw += (size >> 4);

	/* Coalesce if the previous block was free */
	void* coalesced_bp = coalesce(bp);

	return coalesced_bp;
}

/**********************************************************
 * find_fit
 * Traverse the free list searching for a block to fit asize
 * Using FIRST FIT
 * Return NULL if no free blocks can handle that size
 * Assumed that asize is aligned
 **********************************************************/
void * find_fit(size_t asize) {

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

	if (bp == NULL) {
		return;
	}
	size_t size = GET_SIZE(HDRP(bp));
	PUT(HDRP(bp), PACK(size,0));
	PUT(FTRP(bp), PACK(size,0));

	bp = coalesce(bp);
}

/**********************************************************
 * mm_malloc
 * Allocate a block of size bytes
 * The type of search is determined by find_fit
 * If the block is larger than needed, it is split by
 * trim_free_block
 * If no block satisfies the request, the heap is extended
 **********************************************************/
void *mm_malloc(size_t size) {

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

	if (remaining_free_blk_size > DSIZE) {
		/*split free block*/
		void *split_bp = bp + asize;
		trim_free_block(bp, split_bp, remaining_free_blk_size);
		// malloc remaining asize
		place(bp, asize);
	} else {
		/* allocate complete free block*/
		remove_from_free_list(bp);
		place(bp, free_blk_size);
	}

	mm_check();
	return bp;
}

/**********************************************************
 * mm_realloc
 * If size = 0, free block
 * If ptr = NULL, allocate block
 * If old_size >= new_size, return ptr
 * Otherwise, try to coalesce with next block (if free)
 * Else, allocate a new block of new_size and copy over
 * contents
 *********************************************************/
void *mm_realloc(void *ptr, size_t size) {
	/* If size == 0 then this is just free, and we return NULL */
	if (size == 0) {
		mm_free(ptr);
		return NULL;
	}
	/* If oldptr is NULL, then this is just malloc */
	if (ptr == NULL) {
		return (mm_malloc(size));
	}

	void *oldptr = ptr;
	void *newptr;
	size_t old_size = GET_SIZE(HDRP(oldptr));
	size_t new_size = DSIZE * ((size + (DSIZE) + (DSIZE - 1)) / DSIZE);

	/* If size requested is the same as before, return old pointer */
	if (new_size <= old_size) {
		return oldptr;
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
		} else {
			// If above condition doesn't meet, allocate new block, copy over contents, free old block
			newptr = mm_malloc(size);
			if (newptr == NULL) {
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
 * Return nonzero if the heap is consistent
 * Uncomment the print_free_list() call at the end
 * of the function to print the free list
 * Cases checked:
 * 1) Checks for a valid heap prologue and epilogue
 * 2) Checks if size of block is aligned to DSIZE and
 *    payload is 1 double word or more
 * 3) Checks if header and footer of all blocks are
 *    consistent
 * 4) Verifies that the explicit list is non-cyclic
 * 5) Checks validity of the free list
 *    - all free blocks are in the free list
 *    - all blocks in the free list are free
 * 6) Verifies that all possible adjacent free blocks
 *    are coalesced
 * 7) Checks that the heap and the free list have the same
 *    number of free blocks
 *********************************************************/
int mm_check(void) {

	int num_free_blks_heap = 0;
	int num_free_blks_list = 0;

	void *cur_blkp = heap_listp;

	/* Traverse the heap */
	// check for prologue
	if (!((GET_ALLOC(cur_blkp - DSIZE) == 1)
			&& (GET_SIZE(cur_blkp - DSIZE) == 0))) {
		printf("ERROR: prologue not valid\n");
		return 0;
	}

	while (cur_blkp) {
		size_t blk_size = GET_SIZE(HDRP(cur_blkp));
		int blk_alloc = GET_ALLOC(HDRP(cur_blkp));
		if (blk_size == 0) {
			// verify that this is epilogue
			if (blk_alloc != 1) {
				printf("ERROR: free blk of size 0 present in heap\n");
				return 0;
			}
			if ((cur_blkp != (heap_listp + heap_length_dw * DSIZE))) {
				printf("ERROR: allocated blk of size 0 present in heap\n");
				return 0;
			}
			break;
		}

		// check if size of block is valid
		if (blk_size % 4 != 0) {
			printf("ERROR: blk size not aligned to double words\n");
			return 0;
		}
		if (blk_size < 2 * DSIZE) {
			printf("ERROR: blk size less than 2 double words\n");
			return 0;
		}

		// verify that header and footer of block has same size and allocation
		if (blk_size != GET_SIZE(FTRP(cur_blkp))) {
			printf("ERROR: header and footer have different sizes\n");
			return 0;
		}
		if (blk_alloc != GET_ALLOC(FTRP(cur_blkp))) {
			printf("ERROR: header and footer have different alloc bits\n");
			return 0;
		}

		if (!blk_alloc) {
			// free block
			num_free_blks_heap++;
			void *cur_free_listp = free_list_head;
			while (cur_free_listp && cur_free_listp != cur_blkp) {
				if (cur_free_listp == NEXT_FREE_BLKP(cur_free_listp)) {
					printf("ERROR: free block points to itself\n");
					return 0;
				}
				cur_free_listp = NEXT_FREE_BLKP(cur_free_listp);
			}

			// check if all free blocks are in free list
			if (cur_free_listp != cur_blkp) {
				printf("ERROR: block in heap not in free list\n");
				return 0;
			}
			// check if contiguous blocks have been coalesced
			if (PREV_FREE_BLKP(cur_blkp))
				if (GET_ALLOC(PREV_FREE_BLKP(cur_blkp)) == 1) {
					printf("ERROR: adjacent blocks are free but not coalesced.\n");
					return 0;
				}
		}
		cur_blkp = NEXT_BLKP(cur_blkp);
	}

	void *cur_free_listp = free_list_head;

	/* Traverse the free list */
	// check if every block in free list is marked as free in the heap
	while (cur_free_listp) {
		if (GET_ALLOC(HDRP(cur_free_listp)) != 0) {
			printf("ERROR: block in free list not marked free in heap\n");
			return 0;
		}
		num_free_blks_list++;
		cur_free_listp = NEXT_FREE_BLKP(cur_free_listp);
	}

	if (num_free_blks_heap != num_free_blks_list) {
		printf(
				"ERROR: number of free blocks in free list not the same as heap\n");
		return 0;
	}

//	print_free_list();

	return 1;
}

/**********************************************************
 * print_free_list
 * Prints the entire explicit free list
 **********************************************************/
void print_free_list() {
	void* cur_bp = free_list_head;
	int i = 0;
	while (cur_bp != NULL) {
		printf("%d: %p: size: %lu \n", i, cur_bp, GET_SIZE(HDRP(cur_bp)));
		cur_bp = NEXT_FREE_BLKP(cur_bp);
		i++;
	}
}

/**********************************************************
 * trim_free_block
 * Replaces free block with its trimmed version after
 * allocation
 **********************************************************/
void trim_free_block(void* bp, void *new_bp, size_t new_size) {

	// update free block header, footer and move pointers
	// to new position of free block
	PUT(HDRP(new_bp), PACK(new_size, 0));
	PUT(FTRP(new_bp), PACK(new_size, 0));
	remove_from_free_list(bp);
	add_to_free_list(new_bp);
}

/**********************************************************
 * remove_from_free_list
 * Finds and removes block from free list
 *********************************************************/
void remove_from_free_list(void *bp) {

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
		// remove block from middle
		SET_NEXT_FREE_BLKP(prev_bp, next_bp);
		SET_PREV_FREE_BLKP(next_bp, prev_bp);
	}
}

/**********************************************************
 * add_to_free_list
 * Adds block to head of free list
 *********************************************************/
void add_to_free_list(void *bp) {
	// Insert address at head
	SET_NEXT_FREE_BLKP(bp, free_list_head);
	SET_PREV_FREE_BLKP(bp, NULL);
	if (free_list_head != NULL)
		SET_PREV_FREE_BLKP(free_list_head, bp);
	free_list_head = bp;
}

