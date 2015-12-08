#include <stdlib.h>
#include<stdio.h>
#include <pthread.h>
#include "life.h"
#include "util.h"
#include<assert.h>

/**************************************************************
 * This file contains the parallel implementation of the game
 * of life.
 *
 * Authors: Divya Dadlani
 * 			Geetika Saksena
 * 			(Team Basilisk)
 *************************************************************/


/**
 * Swapping the two boards only involves swapping pointers, not
 * copying values.
 */
#define SWAP_BOARDS( b1, b2 )  do { \
  char* temp = b1; \
  b1 = b2; \
  b2 = temp; \
} while(0)

/**
 * The macro which returns the status of cell (i, j) on the board.
 */
#define BOARD( __board, __i, __j )  (__board[(__i) + LDA*(__j)])

/**
 * A structure which holds the arguments necessary for multithreading
 * and synchronization
 */
typedef struct arguments {
	char *outboard;
	char *inboard;
	pthread_barrier_t *barrier;
	pthread_mutex_t *mutex;
	int *return_count;
	int total_nrows;
	int tid;
	int gens_max;
} arguments;

void *evaluate_board(void *thread_args);

/**
 * Parallel implementation of the 'sequential_game_of_life'
 * function using 8 threads.
 *
 * Takes the following parameters:
 *  -pointers to the inboard and outboard
 *  -number of rows and columns
 *  -total number of iterations for which to run
 *
 *  Returns a pointer to the final board after running
 *  the game of life algorithm for gens_max iterations.
 */
char*
parallel_game_of_life(char* outboard, char* inboard, const int nrows, const int ncols, const int gens_max) {
	/* Thread generation variables */
	const int num_threads = 8;
	pthread_t threads[num_threads];
	int thread_id[num_threads];
	char **return_board_ptr[num_threads];
	pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
	pthread_barrier_t barrier; // barrier synchronization object
	pthread_barrier_init(&barrier, NULL, num_threads);

	char *return_board = NULL;
	int i;
	int count = -1;
	/* Create the threads and run board evaluation */
	for (i = 0; i < num_threads; i++) {
		return_board_ptr[i] = (char **) malloc(sizeof(char *));
		thread_id[i] = i;
		arguments *thread_args = (arguments *) malloc(1 * sizeof(arguments));
		thread_args->outboard = outboard;
		thread_args->inboard = inboard;
		thread_args->barrier = &barrier;
		thread_args->mutex = &mutex;
		thread_args->return_count = &count;
		thread_args->total_nrows = nrows;
		thread_args->tid = thread_id[i];
		thread_args->gens_max = gens_max;
		pthread_create(&threads[i], NULL, evaluate_board, (void *) thread_args);

	}

	/* Join all the threads and find the board to return */
	for (i = 0; i < num_threads; i++) {
		pthread_join(threads[i], (void **) return_board_ptr[i]);
		if (*return_board_ptr[i] != NULL)
			return_board = *return_board_ptr[i];
	}
	assert(return_board != NULL);
	return return_board;
}

/**
 * Evaluates the status of cells in one part of the board
 * for all iterations.
 *
 * This function is called 8 times (i.e. by each thread) and
 * is synchronized using a barrier before each iteration and
 * a lock before returning the final outcome.
 *
 * Takes a struct of thread arguments which it uses to
 * calculate the bounds within which each thread operates.
 * The struct also passes in synchronization variables that
 * are shared by all threads.
 *
 * Returns the complete evaluated board.
 */
void *evaluate_board(void *thread_args) {

	/* Synchronization variables */
	int *return_count = ((arguments *) thread_args)->return_count;
	pthread_barrier_t *barrier = ((arguments *) thread_args)->barrier;
	pthread_mutex_t *mutex = ((arguments *) thread_args)->mutex;

	/* Bound calculation variables */
	int tid = ((arguments *) thread_args)->tid;
	int dim = ((arguments *) thread_args)->total_nrows;
	char *inboard = ((arguments *) thread_args)->inboard;
	char *outboard = ((arguments *) thread_args)->outboard;
	int gens_max = ((arguments *) thread_args)->gens_max;

	int start_row, start_col, end_row, end_col, i, j, curgen;

	/* Assign start and end bounds for each thread
	 * The board is divided into 8 segments as follows:
	 * _____________________
	 * |    |    |    |    |
	 * |    |    |    |    |
	 * |    |    |    |    |
	 * |    |	 |	  |	   |
	 * |____|____|____|____|
	 * |    |    |    |	   |
	 * |    |    |    |	   |
	 * |    |    |    |	   |
	 * |    |    |    |	   |
	 * |____|____|____|____|
	 *
	 * Each thread runs the game of life computation on
	 * one of these segments.
	 */
	if (tid % 2) {
		start_row = 0;
		end_row = dim >> 1;
	} else {
		start_row = dim >> 1;
		end_row = dim;
	}

	switch (tid) {
	case 0:
	case 1:
		start_col = 0;
		end_col = dim >> 2;
		break;
	case 2:
	case 3:
		start_col = dim >> 2;
		end_col = dim >> 1;
		break;
	case 4:
	case 5:
		start_col = dim >> 1;
		end_col = dim - (dim >> 2);
		break;
	case 6:
	case 7:
		start_col = dim - (dim >> 2);
		end_col = dim;
		break;
	default:
		start_row = 0;
		start_col = 0;
		end_row = dim;
		end_col = dim;
	}

	/* Evaluate board */
	const int tile_size = 32;
	const int LDA = dim;
	for (curgen = 0; curgen < gens_max; curgen++) {

		/* All threads must wait before starting a new generation */
		pthread_barrier_wait(barrier);

		for (i = start_row; i < end_row; i += tile_size) {
			int ii;
			for (j = start_col; j < end_col; j += tile_size) {
				int jj;
				for (ii = i; (ii < end_row) && (ii < (i + tile_size)); ii++) {
					int inorth = wrap_mod(ii - 1, dim);
					int isouth = wrap_mod(ii + 1, dim);
					for (jj = j; (jj < end_col) && (jj < (j + tile_size)); jj++) {
						int jwest = wrap_mod(jj - 1, dim);
						int jeast = wrap_mod(jj + 1, dim);

						char neighbor_count =
						BOARD(inboard, inorth, jwest) +
						BOARD (inboard, ii, jwest) +
						BOARD (inboard, isouth, jwest) +
						BOARD (inboard, inorth, jj) +
						BOARD (inboard, isouth, jj) +
						BOARD (inboard, inorth, jeast) +
						BOARD (inboard, ii, jeast) +
						BOARD (inboard, isouth, jeast);

						char state = BOARD(inboard, ii, jj);
						BOARD(outboard, ii, jj) = (neighbor_count == (char) 3) ||
							    (state && (neighbor_count >= 2) && (neighbor_count <= 3));
					}
				}
			}

		}
		SWAP_BOARDS(outboard, inboard);

	}
	/* Ensure that only the last thread returns
	 * the final evaluated board */
	char *return_board = NULL;
	pthread_mutex_lock(mutex);
		(*return_count)++;
		if ((*return_count) == 7) {
			return_board = inboard;
		}
	pthread_mutex_unlock(mutex);
	return return_board;
}
