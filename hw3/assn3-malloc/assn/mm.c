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
//#define PREV_FREE_BLKP(fbp) (*(void **) (fbp+WSIZE))

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

void trim_free_block(void *split_bp, int split_size);

int get_array_position_malloc(unsigned int num_words);

int get_power_of_2(int i);

int mm_check(void);

void *remove_from_free_list(void *bp);

void add_to_free_list(void *bp, int index);

void print_free_list();
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
	// printf("heap_listp: %p", heap_listp);
	//  ___________________________________________
	// |0x1|S|__________FREE BLOCK___________|S|0x1|
	//  W   W <------heap_len * dsize-------> W   W

	// alignment & prologue
	PUT(heap_listp, 1);
	// header containing size of block
	PUT(heap_listp + WSIZE, PACK((heap_length * DSIZE + DSIZE), 0));
	// footer containing size of block
	PUT(heap_listp + (heap_length * DSIZE + DSIZE), PACK((heap_length * DSIZE + DSIZE),0));
	// alignment & epilogue
	PUT(heap_listp + ((heap_length * DSIZE + DSIZE) + WSIZE), 1);

	// heap_listp starts at payload of first (huge) block
	// heap_listp  is now a big free block
	heap_listp+=DSIZE;
	// include header and footer
	heap_length+=1;
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

    // MACRO for PREV_BLKP does not work for this case
    if (bp == heap_listp) {
    	prev_alloc = 1;
    }
    // printf("Coalesce: size1: %u\n",(unsigned int) size);
    void *coalesced_bp = NULL;

    if (prev_alloc && next_alloc) {       /* Case 1 */
        coalesced_bp = bp;
    }

    else if (prev_alloc && !next_alloc) { /* Case 2 */
		//account for size 16 external fragmentation which isn't
		//in the free list
		if (GET_SIZE(HDRP(NEXT_BLKP(bp))) != DSIZE) {
			assert(remove_from_free_list(NEXT_BLKP(bp)));
		}
        size += GET_SIZE(HDRP(NEXT_BLKP(bp)));
        PUT(HDRP(bp), PACK(size, 0));
        PUT(FTRP(bp), PACK(size, 0));
        coalesced_bp = bp;
    }

    else if (!prev_alloc && next_alloc){
		//account for size 16 external fragmentation which isn't
		//in the free list
		if (GET_SIZE(HDRP(PREV_BLKP(bp))) != DSIZE) {
			void * if_free = remove_from_free_list(PREV_BLKP(bp));
			assert(if_free);
		}
    	  /* Case 3 */
         size += GET_SIZE(HDRP(PREV_BLKP(bp)));
		 PUT(FTRP(bp), PACK(size, 0));
		 PUT(HDRP(PREV_BLKP(bp)), PACK(size, 0));
		 coalesced_bp = PREV_BLKP(bp);
    }

	else { /* Case 4 */
		//account for size 16 external fragmentation which isn't
		//in the free list
		int size_prev = GET_SIZE(HDRP(PREV_BLKP(bp)));
		int size_next = GET_SIZE(FTRP(NEXT_BLKP(bp)));
		if (size_prev != DSIZE)
			assert(remove_from_free_list(PREV_BLKP(bp)));
		if (size_next != DSIZE)
			assert(remove_from_free_list(NEXT_BLKP(bp)));

		size += size_prev + size_next;
        // printf("Coalesce: size_p: %u\n",(unsigned int) size_prev);
        // printf("Coalesce: size_n: %u\n",(unsigned int) size_next);
		PUT(HDRP(PREV_BLKP(bp)), PACK(size,0));
		PUT(FTRP(NEXT_BLKP(bp)), PACK(size,0));
		coalesced_bp = PREV_BLKP(bp);
	}

	// printf("Coalesced into size: %u, addr: %p\n",(unsigned int) size, (int*)coalesced_bp);
	return coalesced_bp;
}

/**********************************************************
 * extend_heap
 * Extend the heap by "words" words, maintaining alignment
 * requirements of course. Free the former epilogue block
 * and reallocate its new header
 **********************************************************/
void *extend_heap(size_t words)
{
    // printf("Entered extend heap\n");

    char *bp;
    size_t size;

    /* Allocate an even number of words to maintain alignments */
    size = (words % 2) ? (words+1) * WSIZE : words * WSIZE;

    /* Find the size of the last block in the heap (if free) */
    void* p = heap_listp + (heap_length * DSIZE - DSIZE);
    if (GET_ALLOC(p) == 0) {
    	size -= GET_SIZE(p);
    }

    if ( (bp = mem_sbrk(size)) == (void *)-1 )
        return NULL;

    /* Initialize free block header/footer and the epilogue header */
    PUT(HDRP(bp), PACK(size, 0));                // free block header
    PUT(FTRP(bp), PACK(size, 0));                // free block footer
    PUT(HDRP(NEXT_BLKP(bp)), PACK(0, 1));        // new epilogue header
    heap_length += (size >> 4);
    // printf("Exiting extend heap, new heap_length: %d\n", heap_length);
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

	// printf("Entered find fit.\n");
	// Divide by DSIZE (which is 16 bytes)
	unsigned int num_dwords_payload = (asize >> 4) - 1;
	int free_list_index = get_array_position_malloc(num_dwords_payload);

	if (free_list_index == FREE_LIST_SIZE - 1) {
		// look in the largest block range to find a fit
		void *best_fit_blkp = NULL;
		void *cur_blkp = free_lists[free_list_index];
		int best_fit = 9999, cur_fit;

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
			// printf("Found best_fit blkp, leaving find fit.\n");
			remove_from_free_list(best_fit_blkp);
			return best_fit_blkp;
		}
	} else {
		while (free_list_index < FREE_LIST_SIZE) {
			void *memblk = (unsigned int *) free_lists[free_list_index];
			if (memblk == NULL) {
				free_list_index++;
			} else {
				free_lists[free_list_index] = NEXT_FREE_BLKP(memblk);
				// printf("Found memblkp, leaving find fit.\n");
				return memblk;
			}
		}
	}
	// printf("Found nothing, leaving find fit.\n");
	return NULL;
}

/**********************************************************
 * place
 * Mark the block as allocated
 **********************************************************/
void place(void* bp, size_t asize)
{
//  /* Get the current block size */
//  size_t bsize = GET_SIZE(HDRP(bp));

  PUT(HDRP(bp), PACK(asize, 1));
  PUT(FTRP(bp), PACK(asize, 1));
}

/**********************************************************
 * mm_free
 * Free the block and coalesce with neighbouring blocks
 **********************************************************/
void mm_free(void *bp)
{
	// printf("Freeing block %p of size %lu\n",bp, GET_SIZE(HDRP(bp)));
    if(bp == NULL){
      return;
    }
    size_t size = GET_SIZE(HDRP(bp));
    PUT(HDRP(bp), PACK(size,0));
    PUT(FTRP(bp), PACK(size,0));

    bp = coalesce(bp);
    // size may be different after coalescing
    trim_free_block(bp, GET_SIZE(HDRP(bp)));
    // printf("Exiting free\n");
    mm_check();
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
void *mm_malloc(size_t size)
{
	 mm_check();
//		 printf("ERROR WITH HEAP!!\n");
	// printf("Entering malloc\n");

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
        asize = DSIZE * ((size + (DSIZE) + (DSIZE-1))/ DSIZE);
    /* Search the free list for a fit */
    // printf("Asize: %u\n",(unsigned int)asize);
    if ((bp = find_fit(asize)) != NULL) {
    	int temp = GET_SIZE(HDRP(bp));
    	int split_size = temp - asize;

    	// printf("GET_SIZE(HDRP(bp)): %lu\n",GET_SIZE(HDRP(bp)));
    	// printf("split_size: %d\n",split_size);
    	// printf("bp: %p\n",bp);
    	// should be >= 0 or find_fit did not find the correct array position
    	assert(split_size >= 0);

    	void *split_bp = bp + asize;


    	// set header and footer of malloc'ed block
        place(bp, asize);
        trim_free_block(split_bp, split_size);
        return bp;
    }


    /* No fit found. Get more memory and place the block */
    extendsize = MAX(asize, CHUNKSIZE);
    if ((bp = extend_heap(extendsize/WSIZE)) == NULL)
        return NULL;

    int split_size = GET_SIZE(HDRP(bp)) - asize;

	// should be >= 0 or find_fit did not find the correct array position
	assert(split_size >= 0);

	void *split_bp = bp + asize;
    place(bp, asize);
	trim_free_block(split_bp, split_size);

	mm_check();
//		 printf("ERROR WITH HEAP!!\n");

	// printf("Exiting malloc\n");
    return bp;
}

/**********************************************************
 * mm_realloc
 * Implemented simply in terms of mm_malloc and mm_free
 *********************************************************/
void *mm_realloc(void *ptr, size_t size)
{
	// printf("Entering realloc\n");
    /* If size == 0 then this is just free, and we return NULL. */
    if(size == 0){
      mm_free(ptr);
      // printf("Exiting realloc free\n");
      return NULL;
    }
    /* If oldptr is NULL, then this is just malloc. */
    if (ptr == NULL) {
    	// printf("Exiting realloc malloc \n");
      return (mm_malloc(size));
    }

    void *oldptr = ptr;
    void *newptr;
    size_t copySize;

    newptr = mm_malloc(size);
    if (newptr == NULL) {
    	// printf("Exiting realloc out of mem\n");
      return NULL;
    }

    /* Copy the old data. */
    copySize = GET_SIZE(HDRP(oldptr));
    if (size < copySize)
      copySize = size;
    memcpy(newptr, oldptr, copySize);
    mm_free(oldptr);
    // printf("Exiting realloc done\n");
    return newptr;
}

/**********************************************************
 * mm_check
 * Check the consistency of the memory heap
 * Return nonzero if the heap is consistent.
 *********************************************************/
int mm_check(void){

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
}

void print_free_list() {
	int i;
	unsigned int fsize, falloc;
	for (i = 0; i < FREE_LIST_SIZE; i++) {
		printf("free_list[%d]: ",i);
		void *cur = (void *)free_lists[i];
		while(cur != NULL) {
			fsize = GET_SIZE(HDRP(cur));
			// confirm that it is not allocated
			falloc = GET_ALLOC(HDRP(cur));
			printf("[addr = %p, size = %u]", cur, fsize);
			if(falloc)
				printf(", ERROR: ALLOCATED!!");
			printf("-->");
			cur = NEXT_FREE_BLKP(cur);
		}
		printf("\n");
	}
}

/*
 * Get array position which best fits free block
 * split_bp: Pointer to partition + WSIZE (i.e. the payload of the partition)
 * split_size_payload: Payload of the partition in bytes
 */
void trim_free_block(void *split_bp, int split_size) {
	// printf("Entering trim_free\n");
	assert(split_bp != NULL);
	void* partition_bp = split_bp;
	int partition_array_pos = -1;
	int partition_size = 0;
	// recursively split and place free blocks in appropriate free lists position
	while (split_size > DSIZE) {
		// get closest fit index
		int split_size_payload_dwords = (split_size >> 4) - 1;
		partition_array_pos = (__builtin_popcount(split_size_payload_dwords) > 1)? get_array_position_malloc(split_size_payload_dwords) - 1 : get_array_position_malloc(split_size_payload_dwords);

//		// printf("partition_array_pos : %d\n", partition_array_pos);

		int partition_size_payload = get_power_of_2(partition_array_pos) * DSIZE;
		partition_size = partition_size_payload + DSIZE;
		if(partition_size < 0)
			printf("ERROR: Size of partition is %d\n",partition_size);

//		// printf("(IN DW) partition_size: %d, split_size : %d\n", partition_size>>4, split_size>>4);
//		// printf("(IN DW) split_size - partition_size = %d\n", (split_size - partition_size)>>4);

		assert(partition_size >= 0);
//		if (partition_bp == (void *)0x7f11bbfc5020) {
//			printf("Array position: %d, partition_size: %d\n",partition_array_pos, partition_size);

//		}
		// set header and footer of free split block
		PUT(HDRP(partition_bp), PACK(partition_size, 0));
		PUT(FTRP(partition_bp), PACK(partition_size, 0));
		// insert into head of linked list at partition_array_pos
		add_to_free_list(partition_bp, partition_array_pos);

		partition_bp += partition_size;
		split_size -= partition_size;
	}
	// odd DW left, assign header and footer with size 1 DW
	if (split_size == DSIZE) {
		// set header and footer of free split block
		PUT(HDRP(partition_bp), PACK(split_size, 0));
		PUT(FTRP(partition_bp), PACK(split_size, 0));
	}
	// printf("Leaving trim_free\n");
}

int get_array_position_malloc(unsigned int num_dwords) {
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

void *remove_from_free_list(void *bp) {
	// printf("Removing %p from free list\n",bp);
	unsigned int payload_dwords = (GET_SIZE(HDRP(bp))-DSIZE) >> 4;
	int array_pos = get_array_position_malloc(payload_dwords);

	void *prev = NULL;
	void *cur = free_lists[array_pos] ;
	while((cur != NULL) && (cur != bp)) {
		prev = cur;
		cur = NEXT_FREE_BLKP(cur);
	}

	if (cur == NULL) {
		printf("bp: %p\n",bp);
		print_free_list();
		return NULL;
	}

	if (prev != NULL) {
		//somewhere later in the list
		*(void **)prev = NEXT_FREE_BLKP(cur);
	} else {
		//remove from head
		free_lists[array_pos] = NEXT_FREE_BLKP(cur);
	}

	return cur;
}

void add_to_free_list(void *bp, int index) {
	PUT(bp, (uintptr_t) free_lists[index]);
	if (*(uintptr_t*)bp == 0) {
		// printf("BP's next is now null\n");
	}
	free_lists[index] = bp;
}


// Insert address at head

//void add_to_free_list(void *bp, int index) {
//	PUT(bp, (uintptr_t) free_lists[index]);
//	if (*(uintptr_t*)bp == 0) {
//		// printf("BP's next is now null\n");
//	}
//	free_lists[index] = bp;
//}



