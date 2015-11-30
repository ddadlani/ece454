#include <stdlib.h>
#include<stdio.h>
#include <pthread.h>
#include "life.h"
#include "util.h"

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
	char **outboard_ptr;
	char **inboard_ptr;
	pthread_barrier_t *barrier;
	pthread_mutex_t *mutex;
	int *done;
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
//	char *final_board = inboard;
	pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
	pthread_barrier_t barrier; // barrier synchronization object
	pthread_barrier_init (&barrier, NULL, num_threads);
	/* HINT: in the parallel decomposition, LDA may not be equal to
	 nrows! */
	int i;
	int done_var = 0;
//	for (curgen = 0; curgen < gens_max; curgen++) {
		for (i = 0; i < num_threads; i++) {
			thread_id[i] = i;
			arguments *thread_args = (arguments *)malloc(1*sizeof(arguments));
			thread_args->outboard_ptr = &outboard;
			thread_args->inboard_ptr = &inboard;
			thread_args->barrier = &barrier;
			thread_args->mutex = &mutex;
			thread_args->done = &done_var;
			thread_args->total_nrows = nrows;
			thread_args->tid = thread_id[i];
			thread_args->gens_max = gens_max;
			pthread_create(&threads[i], NULL, calculate_status, (void *)thread_args);

		}

		for (i = 0; i < num_threads; i++)
			pthread_join(threads[i], NULL);


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
	return inboard;
}

void *calculate_status(void *thread_args) {
	int tid = ((arguments *) thread_args)->tid;
	int dim = ((arguments *) thread_args)->total_nrows;
	pthread_barrier_t *barrier = ((arguments *) thread_args)->barrier;
	pthread_mutex_t *mutex = ((arguments *) thread_args)->mutex;
	int *done = ((arguments *) thread_args)->done;
	char **inboard_ptr = ((arguments *) thread_args)->inboard_ptr;
	char **outboard_ptr = ((arguments *) thread_args)->outboard_ptr;
	char *inboard, *outboard;
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
		inboard = *inboard_ptr;
		outboard = *outboard_ptr;

		pthread_barrier_wait(barrier);
		pthread_mutex_lock(mutex);
		if (*(done)) {
			printf("TID: %d reset it at curgen %d!\n",tid, curgen);
			*done = 0;
		}
		pthread_mutex_unlock(mutex);

		for (i = start_row; i < end_row; i++) {
			for (j = start_col; j < end_col; j++) {
				const int inorth = mod(j - 1, end_row);
				const int isouth = mod(j + 1, end_row);
				const int jwest = mod(j - 1, end_col);
				const int jeast = mod(j + 1, end_col);

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
				pthread_mutex_lock(mutex);
					printf("TID: %d (%d, %d) = %d\n", tid, i, j, x);
				pthread_mutex_unlock(mutex);

			}

		}
		pthread_barrier_wait(barrier);
		pthread_mutex_lock(mutex);
			printf("TID: %d \n",tid);
			if (!(*done)) {
				printf("TID: %d did it at curgen %d!\n",tid, curgen);
				SWAP_BOARDS(*outboard_ptr, *inboard_ptr);
				*done = 1;
			}
		pthread_mutex_unlock(mutex);

	}
	return NULL;
}
