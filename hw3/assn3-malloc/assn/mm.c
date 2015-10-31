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
    "geetika.saksena@mail.utoronto.ca"
};

/*************************************************************************
 * Basic Constants and Macros
 * You are not required to use these macros but may find them helpful.
*************************************************************************/
#define WSIZE       sizeof(void *)            /* word size (8 bytes on 64-bit) */
#define DSIZE       (2 * WSIZE)            /* doubleword size (16 bytes on 64-bit) */
#define CHUNKSIZE   (1<<7)      /* initial heap size (bytes) */

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
#define NEXT_FREE_BLKP(fbp) (*(void **) fbp)
#define PREV_FREE_BLKP(fbp) (*(void **) (fbp+WSIZE))

#define SET_NEXT_FREE_BLKP(newfbp, fbp) (PUT(newfbp, fbp))
#define FREE_LIST_SIZE 11
#define INITIAL_HEAP_SIZE 512

void* heap_listp = NULL;

// Number of double words currently in the heap
int heap_length = INITIAL_HEAP_SIZE;


// Segregated free list
// each element of the free_list contains 2^i double-word sized blocks
// last element contains all blocks larger than 512 dwords
void *free_lists[FREE_LIST_SIZE];
unsigned int num_free_blocks[FREE_LIST_SIZE];

int get_array_position(unsigned int num_words);


/**********************************************************
 * mm_init
 * Initialize the heap, including "allocation" of the
 * prologue and epilogue. At initialization, we create
 * one heap block of size INITIAL_HEAP_SIZE, which is
 * the block size held in the second last element of
 * free_lists.
 **********************************************************/
 int mm_init(void)
 {

	if ((heap_listp = mem_sbrk((heap_length+2)*DSIZE)) == (void *) -1)
		return -1;

	//  ___________________________________
	// |0|S|__________FREE BLOCK___________|S|0|
	//  W W <------heap_len * dsize-------> W W

	// alignment
	PUT(heap_listp, 0);
	// header containing size of block
	PUT(heap_listp + WSIZE, PACK(heap_length * DSIZE, 0));
	// footer containing size of block
	PUT(heap_listp + (heap_length * DSIZE), PACK((heap_length * DSIZE),0));

	PUT(heap_listp + ((heap_length * DSIZE) + WSIZE), 0);

	// heap_listp starts at payload of first (huge) block
	// heap_listp  is now a big free block
	heap_listp+=DSIZE;
	int i;
	for (i = 0; i < 10; i++) {
		free_lists[i] = 0;
		num_free_blocks[i] = 0;
	}

	free_lists[9] = heap_listp;
	num_free_blocks[9] = 1;
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
void *coalesce(void *bp)
{
    size_t prev_alloc = GET_ALLOC(FTRP(PREV_BLKP(bp)));
    size_t next_alloc = GET_ALLOC(HDRP(NEXT_BLKP(bp)));
    size_t size = GET_SIZE(HDRP(bp));

    if (prev_alloc && next_alloc) {       /* Case 1 */
        return bp;
    }

    else if (prev_alloc && !next_alloc) { /* Case 2 */
        size += GET_SIZE(HDRP(NEXT_BLKP(bp)));
        PUT(HDRP(bp), PACK(size, 0));
        PUT(FTRP(bp), PACK(size, 0));
        return (bp);
    }

    else if (!prev_alloc && next_alloc) { /* Case 3 */
        size += GET_SIZE(HDRP(PREV_BLKP(bp)));
        PUT(FTRP(bp), PACK(size, 0));
        PUT(HDRP(PREV_BLKP(bp)), PACK(size, 0));
        return (PREV_BLKP(bp));
    }

    else {            /* Case 4 */
        size += GET_SIZE(HDRP(PREV_BLKP(bp)))  +
            GET_SIZE(FTRP(NEXT_BLKP(bp)))  ;
        PUT(HDRP(PREV_BLKP(bp)), PACK(size,0));
        PUT(FTRP(NEXT_BLKP(bp)), PACK(size,0));
        return (PREV_BLKP(bp));
    }
}

/**********************************************************
 * extend_heap
 * Extend the heap by "words" words, maintaining alignment
 * requirements of course. Free the former epilogue block
 * and reallocate its new header
 **********************************************************/
void *extend_heap(size_t words)
{
    char *bp;
    size_t size;

    /* Allocate an even number of words to maintain alignments */
    size = (words % 2) ? (words+1) * WSIZE : words * WSIZE;
    if ( (bp = mem_sbrk(size)) == (void *)-1 )
        return NULL;

    /* Initialize free block header/footer and the epilogue header */
    PUT(HDRP(bp), PACK(size, 0));                // free block header
    PUT(FTRP(bp), PACK(size, 0));                // free block footer
//    PUT(HDRP(NEXT_BLKP(bp)), PACK(0, 1));        // new epilogue header

    /* Coalesce if the previous block was free */
    return coalesce(bp);
}


/**********************************************************
 * find_fit
 * Traverse the heap searching for a block to fit asize
 * Return NULL if no free blocks can handle that size
 * Assumed that asize is aligned
 **********************************************************/
void * find_fit(size_t asize)
{

	printf("Entered find fit.\n");
	// Divide by DSIZE (which is 16 bytes)
	unsigned int num_dwords = asize >> 4;
	int free_list_index = get_array_position(num_dwords);

	if (free_list_index == FREE_LIST_SIZE - 1) {
		// look in the largest block range to find a fit
		void *best_fit_blkp = NULL;
		void *cur_blkp = free_lists[free_list_index];
		int best_fit, cur_fit;

		while(cur_blkp != NULL) {
			cur_fit = GET_SIZE(HDRP(cur_blkp)) - asize;
			if (cur_fit == 0) {
				// found the exact fit
				best_fit_blkp = cur_blkp;
				best_fit = 0;
				break;
			}
			else if (cur_fit > 0) {
				if ((best_fit_blkp == NULL) || (cur_fit < best_fit)) {
					// we don't have a previous best fit or this fit is better than our previous best fit
					best_fit_blkp = cur_blkp;
					best_fit = cur_fit;
				}
			}
			cur_blkp = NEXT_FREE_BLKP(cur_blkp);
		}
		// found a good fit. If not, will extend heap below
		if (best_fit_blkp != NULL) {
			printf("Found best_fit blkp, leaving find fit.\n");
			return best_fit_blkp;
		}
	} else {
		while (free_list_index < FREE_LIST_SIZE) {
			void *memblk = (unsigned int *) free_lists[free_list_index];
			if (memblk == NULL) {
				free_list_index++;
			} else {
				free_lists[free_list_index] = NEXT_FREE_BLKP(memblk);
				printf("Found memblkp, leaving find fit.\n");
				return memblk;
			}
		}
	}
	printf("Found nothing, leaving find fit.\n");
	return NULL;
}

/**********************************************************
 * place
 * Mark the block as allocated
 **********************************************************/
void place(void* bp, size_t asize)
{
  /* Get the current block size */
  size_t bsize = GET_SIZE(HDRP(bp));

  PUT(HDRP(bp), PACK(bsize, 1));
  PUT(FTRP(bp), PACK(bsize, 1));
}

/**********************************************************
 * mm_free
 * Free the block and coalesce with neighbouring blocks
 **********************************************************/
void mm_free(void *bp)
{
    if(bp == NULL){
      return;
    }
    size_t size = GET_SIZE(HDRP(bp));
    PUT(HDRP(bp), PACK(size,0));
    PUT(FTRP(bp), PACK(size,0));
    coalesce(bp);
}


/**********************************************************
 * mm_malloc
 * Allocate a block of size bytes.
 * The type of search is determined by find_fit
 * The decision of splitting the block, or not is determined
 *   in place(..)
 * If no block satisfies the request, the heap is extended
 **********************************************************/
void *mm_malloc(size_t size)
{
	// return (num_dwords <= INITIAL_HEAP_SIZE) ? extend_heap(INITIAL_HEAP_SIZE * 2) : extend_heap(num_dwords * 2);
    size_t asize; /* adjusted block size */
    size_t extendsize; /* amount to extend heap if no fit */
    char * bp;

    /* Ignore spurious requests */
    if (size == 0)
        return NULL;

    /* Adjust block size to include overhead and alignment reqs. */
    if (size <= DSIZE)
        asize = 2 * DSIZE;
    else
        asize = DSIZE * ((size + (DSIZE) + (DSIZE-1))/ DSIZE);
    /* Search the free list for a fit */
    if ((bp = find_fit(asize)) != NULL) {
        // TRIM
    	unsigned int split_size = GET_SIZE(HDRP(bp)) - asize;
    	int array_pos = -1;
    	while (split_size >= 0) {
    		// get closest fit index
    		array_pos = get_array_position(split_size) - 1;
    		int partition_size = get_power_of_2(array_pos);
    		// set header and footer
    		void *partition_bp = bp + size - WSIZE;
    		PUT(partition_bp, PACK(partition_size * DSIZE, 0));
    		PUT(partition_bp + partition_size*DSIZE - WSIZE, PACK(partition_size * DSIZE, 0));

    		SET_NEXT_FREE_BLKP(partition_bp, free_lists[array_pos]);
    		// add free block to list

    		split_size = split_size - get_power_of_2(array_pos);

    		 //= bp + asize - WSIZE;

    	}
    	if ( )
        int pos = get_array_pos(asize + DSIZE);
        //
        place(bp, asize);
        return bp;
    }

    /* No fit found. Get more memory and place the block */
    extendsize = MAX(asize, CHUNKSIZE);
    if ((bp = extend_heap(extendsize/WSIZE)) == NULL)
        return NULL;
    place(bp, asize);
    return bp;

}

/**********************************************************
 * mm_realloc
 * Implemented simply in terms of mm_malloc and mm_free
 *********************************************************/
void *mm_realloc(void *ptr, size_t size)
{
    /* If size == 0 then this is just free, and we return NULL. */
    if(size == 0){
      mm_free(ptr);
      return NULL;
    }
    /* If oldptr is NULL, then this is just malloc. */
    if (ptr == NULL)
      return (mm_malloc(size));

    void *oldptr = ptr;
    void *newptr;
    size_t copySize;

    newptr = mm_malloc(size);
    if (newptr == NULL)
      return NULL;

    /* Copy the old data. */
    copySize = GET_SIZE(HDRP(oldptr));
    if (size < copySize)
      copySize = size;
    memcpy(newptr, oldptr, copySize);
    mm_free(oldptr);
    return newptr;
}

/**********************************************************
 * mm_check
 * Check the consistency of the memory heap
 * Return nonzero if the heap is consistent.
 *********************************************************/
int mm_check(void){

	void * cur_blkp = heap_listp;

	// check if all free blocks are in the free list array
	while (cur_blkp != NULL) {
		size_t size = GET_SIZE(HDRP(cur_blkp));
		size_t alloc = GET_ALLOC(HDRP(cur_blkp));
		if (alloc) {
			// add these checks later
		}
		else {
			if (__builtin_popcount((unsigned int) size) > 1) {
				// size is not a power of 2
				return 0;
			}
			void *head = free_lists[get_array_position(size)];
			while (head != NULL) {
				if (head == cur_blkp)
					break;
				else {
					// address of next free block in linked list should
					// be located at head
//					unsigned int temp = (uintptr_t) head;
					head = *(void**) head;
				}
			}
			// head was not found in the linked list at free_lists[i]
			if (head == NULL)
				return 0;
		}
		cur_blkp = NEXT_BLKP(cur_blkp);
	}
	// all blocks correctly accounted for
	return 1;
}
//		else {
//			int largest_blk = 1024; // max free block size in our array
//			int powers_of_2 = 1;
//			int size_ = size;
//			int i = 0;

			// verify if free block size is a power of 2
//			while(powers_of_2 <= 1024 && size_ > 0) {
//				if (powers_of_2 == size_) {
//					// check if block is in our array
//					uintptr_t free_block = free_lists[i];
//					while (free_block != 0) {
//						if (cur_blkp == free_block) {
//							// found it
//							break;
//						}
//						free_block = *(free_block);
//					}
//					if (free_block == 0) {
//						// error
//					}
//				}
//				size_ >>= 1;
//				i++;
//			}
//			if (size_ == 0) {
//				// error
//			}
//
//		}
//		cur_blkp = NEXT_BLKP(cur_blkp);
//	}


int get_array_position(unsigned int num_dwords) {
	if (num_dwords > INITIAL_HEAP_SIZE)
		return FREE_LIST_SIZE - 1;	// last element of the free list is reserved for blocks larger than 512 dwords

	unsigned int num_set_bits =__builtin_popcount(num_dwords);

	if (num_set_bits > 1) {
		// not a power of 2. Return one position up
		return sizeof(int)*8 - __builtin_clz(num_dwords);
	} else if (num_set_bits == 1) {
		// is a power of 2. Return this position
		return sizeof(int)*8 - __builtin_clz(num_dwords)-1;
	} else {
		// this is a zero. Should not get here
		return -1;
	}
}

/*
 * Calculate 2^i
 */
int get_power_of_2(int i) {
	int result = 1;
	while (i > 0) {
		result<<=1;
		i--;
	}
	return result;
}
