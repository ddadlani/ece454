#include <stdlib.h>
#include<stdio.h>
#include <pthread.h>
#include "life.h"
#include "util.h"
#include<assert.h>

/**
 * Swapping the two boards only involves swapping pointers, not
 * copying values.
 */
#define SWAP_BOARDS( b1, b2 )  do { \
  char* temp = b1; \
  b1 = b2; \
  b2 = temp; \
} while(0)

#define BOARD( __board, __i, __j )  (__board[(__i) + LDA*(__j)])

typedef struct arguments {
//	char **outboard_ptr;
//	char **inboard_ptr;
	char *outboard;
	char *inboard;

	pthread_barrier_t *barrier;
	pthread_mutex_t *mutex;
	int *return_count;
	int total_nrows;
	int tid;
	int gens_max;
} arguments;



void *calculate_status(void *thread_args);

char*
parallel_game_of_life(char* outboard, char* inboard, const int nrows,
		const int ncols, const int gens_max) {
	const int num_threads = 4;
	pthread_t threads[num_threads];
	int thread_id[num_threads];
	char **return_board_ptr[num_threads];
	char *return_board = NULL;
	pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
	pthread_barrier_t barrier; // barrier synchronization object
	pthread_barrier_init (&barrier, NULL, num_threads);
//	char **outboard_ptr = &outboard;
//	char **inboard_ptr = &inboard;
	/* HINT: in the parallel decomposition, LDA may not be equal to
	 nrows! */
	int i;
	int count = -1;
//	for (curgen = 0; curgen < gens_max; curgen++) {
		for (i = 0; i < num_threads; i++) {
			return_board_ptr[i] = (char **)malloc(sizeof(char *));
			thread_id[i] = i;
			arguments *thread_args = (arguments *)malloc(1*sizeof(arguments));
//			thread_args->outboard_ptr = outboard_ptr;
//			thread_args->inboard_ptr = inboard_ptr;
			thread_args->outboard = outboard;
			thread_args->inboard = inboard;
			thread_args->barrier = &barrier;
			thread_args->mutex = &mutex;
			thread_args->return_count = &count;
			thread_args->total_nrows = nrows;
			thread_args->tid = thread_id[i];
			thread_args->gens_max = gens_max;
			pthread_create(&threads[i], NULL, calculate_status, (void *)thread_args);

		}

		for (i = 0; i < num_threads; i++) {
			pthread_join(threads[i], (void **)return_board_ptr[i]);
			if (*return_board_ptr[i] != NULL)
				return_board = *return_board_ptr[i];
		}
		// check what outboard is here
//		SWAP_BOARDS(outboard, inboard);
//
//	}
	/*
	 * We return the output board, so that we know which one contains
	 * the final result (because we've been swapping boards around).
	 * Just be careful when you free() the two boards, so that you don't
	 * free the same one twice!!!
	 */
		assert(return_board != NULL);
	return return_board;
}

void *calculate_status(void *thread_args) {
	int tid = ((arguments *) thread_args)->tid;
	int dim = ((arguments *) thread_args)->total_nrows;
	pthread_barrier_t *barrier = ((arguments *) thread_args)->barrier;
	pthread_mutex_t *mutex = ((arguments *) thread_args)->mutex;
	int *return_count = ((arguments *) thread_args)->return_count;
	char *inboard = ((arguments *) thread_args)->inboard;
	char *outboard = ((arguments *) thread_args)->outboard;
//	char **inboard_ptr = ((arguments *) thread_args)->inboard_ptr;
//	char **outboard_ptr = ((arguments *) thread_args)->outboard_ptr;
//	char *inboard, *outboard;
	int gens_max = ((arguments *) thread_args)->gens_max;
	int start_row = 0,start_col = 0, end_row = dim, end_col = dim, i, j, curgen;

	switch(tid) {
	case 0:
		start_row = 0;
		start_col = 0;
		end_row = dim >> 1;
		end_col = dim >> 1;
		break;
	case 1:
		start_row = 0;
		start_col = dim >> 1;
		end_row = dim >> 1;
		end_col = dim;
		break;
	case 2:
		start_row = dim >> 1;
		start_col = 0;
		end_row = dim;
		end_col = dim >> 1;
		break;
	case 3:
		start_row = dim >> 1;
		start_col = dim >> 1;
		end_row = dim;
		end_col = dim;
		break;
	}

	const int LDA = dim;
	/* HINT: you'll be parallelizing these loop(s) by doing a
	 geometric decomposition of the output */
	for (curgen = 0; curgen < gens_max; curgen++) {
//		inboard = *inboard_ptr;
//		outboard = *outboard_ptr;

		pthread_barrier_wait(barrier);
//		pthread_mutex_lock(mutex);
//		if (*(done)) {
//			printf("TID: %d reset it at curgen %d!\n",tid, curgen);
//			*done = 0;
//		}
//		pthread_mutex_unlock(mutex);

		for (i = start_row; i < end_row; i++) {
			for (j = start_col; j < end_col; j++) {
				const int inorth = mod(i - 1, dim);
				const int isouth = mod(i + 1, dim);
				const int jwest = mod(j - 1, dim);
				const int jeast = mod(j + 1, dim);

				const char neighbor_count =
				BOARD(inboard, inorth, jwest) +
				BOARD (inboard, inorth, j) +
				BOARD (inboard, inorth, jeast) +
				BOARD (inboard, i, jwest) +
				BOARD (inboard, i, jeast) +
				BOARD (inboard, isouth, jwest) +
				BOARD (inboard, isouth, j) +
				BOARD (inboard, isouth, jeast);

				int x = alivep(neighbor_count, BOARD(inboard, i, j));
				BOARD(outboard, i, j) = x;
//				pthread_mutex_lock(mutex);
//					printf("TID: %d (%d, %d) = %d\n", tid, i, j, x);
//				pthread_mutex_unlock(mutex);

			}

		}
//		pthread_barrier_wait(barrier);
//		pthread_mutex_lock(mutex);
//			printf("TID: %d \n",tid);
//			if (!(*done)) {
//				printf("TID: %d did it at curgen %d!\n",tid, curgen);
//				SWAP_BOARDS(*outboard_ptr, *inboard_ptr);
				SWAP_BOARDS(outboard,inboard);
//				*done = 1;
//			}
//		pthread_mutex_unlock(mutex);

	}
	char *return_board = NULL;
	pthread_mutex_lock(mutex);
		(*return_count)++;
		if ((*return_count) == 3) {
			return_board = inboard;
		}
	pthread_mutex_unlock(mutex);
	return return_board;
}
