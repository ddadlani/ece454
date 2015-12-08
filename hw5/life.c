/*****************************************************************************
 * life.c
 * Parallelized and optimized implementation of the game of life resides here
 ****************************************************************************/
#include <assert.h>
#include "life.h"
#include "util.h"


/*****************************************************************************
 * Helper function definitions
 ****************************************************************************/

/*****************************************************************************
 * Game of life implementation
 ****************************************************************************/
char*
game_of_life (char* outboard, 
	      char* inboard,
	      const int nrows,
	      const int ncols,
	      const int gens_max)
{
	/* Validate assumptions as defined in the lab handout */
	assert(nrows == ncols);
	assert((nrows % 2) == 0);

	/* Decide whether or not to parallelize */
	if (nrows > 32) {
		return parallel_game_of_life (outboard, inboard, nrows, ncols, gens_max);
	} else
		return sequential_game_of_life (outboard, inboard, nrows, ncols, gens_max);
}
