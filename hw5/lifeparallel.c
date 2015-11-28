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
	char *outboard;
	char *inboard;
	int total_nrows;
	int tid;
} arguments;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *calculate_status(void *thread_args);

char*
parallel_game_of_life(char* outboard, char* inboard, const int nrows,
		const int ncols, const int gens_max) {
	const int num_threads = 4;
	pthread_t threads[num_threads];
	int thread_id[num_threads];
	/* HINT: in the parallel decomposition, LDA may not be equal to
	 nrows! */
	int curgen, i;
	for (curgen = 0; curgen < gens_max; curgen++) {
		for (i = 0; i < num_threads; i++) {
			thread_id[i] = i;
			arguments *thread_args = (arguments *)malloc(1*sizeof(arguments));
			thread_args->outboard = outboard;
			thread_args->inboard = inboard;
			thread_args->total_nrows = nrows;
			thread_args->tid = thread_id[i];
			pthread_create(&threads[i], NULL, calculate_status, (void *)thread_args);

		}
		for (i = 0; i < num_threads; i++)
			pthread_join(threads[i], NULL);

		// check what outboard is here
		SWAP_BOARDS(outboard, inboard);

	}
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
	char *inboard = ((arguments *) thread_args)->inboard;
	char *outboard = ((arguments *) thread_args)->outboard;
	int start_row = 0,start_col = 0, end_row = dim, end_col = dim;

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

	const int LDA = end_row;
	/* HINT: you'll be parallelizing these loop(s) by doing a
	 geometric decomposition of the output */
	for (; start_row < end_row; start_row++) {
		for (; start_col < end_col; start_col++) {
			const int inorth = mod(start_row - 1, end_row);
			const int isouth = mod(start_row + 1, end_row);
			const int jwest = mod(start_col - 1, end_col);
			const int jeast = mod(start_col + 1, end_col);

			const char neighbor_count =
			BOARD(inboard, inorth, jwest) +
			BOARD (inboard, inorth, start_col) +
			BOARD (inboard, inorth, jeast) +
			BOARD (inboard, start_row, jwest) +
			BOARD (inboard, start_row, jeast) +
			BOARD (inboard, isouth, jwest) +
			BOARD (inboard, isouth, start_col) +
			BOARD (inboard, isouth, jeast);

			 int x= alivep(neighbor_count,
					BOARD(inboard, start_row, start_col));
			 BOARD(outboard, start_row, start_col) = x;
			pthread_mutex_lock(&mutex);
				printf("TID: %d, (%d,%d): %d\n",tid, start_row, start_col, x);
			pthread_mutex_unlock(&mutex);

		}
	}
	return NULL;
}
