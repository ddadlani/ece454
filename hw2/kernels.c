/********************************************************
 * Kernels to be optimized for the CS:APP Performance Lab
 ********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

/* 
 * ECE454 Students: 
 * Please fill in the following team struct 
 */
team_t team = {
    "Basilisk",              /* Team name */

    "Geetika Saksena",     /* First member full name */
    "geetika.saksena@mail.utoronto.ca",  /* First member email address */

    "Divya Dadlani",                   /* Second member full name (leave blank if none) */
    "divya.dadlani@mail.utoronto.ca"                    /* Second member email addr (leave blank if none) */
};

/***************
 * ROTATE KERNEL
 ***************/

/******************************************************
 * Your different versions of the rotate kernel go here
 ******************************************************/

/* 
 * naive_rotate - The naive baseline version of rotate 
 */
char naive_rotate_descr[] = "naive_rotate: Naive baseline implementation";
void naive_rotate(int dim, pixel *src, pixel *dst) 
{
    int i, j;

    for (i = 0; i < dim; i++)
	for (j = 0; j < dim; j++)
	    dst[RIDX(dim-1-j, i, dim)] = src[RIDX(i, j, dim)];
}

/*
 * ECE 454 Students: Write your rotate functions here:
 */ 
/*
 * rotate - Your current working version of rotate
 * IMPORTANT: This is the version you will be graded on
 */

char rotate_descr[] = "rotate: Final working version";
void rotate(int dim, pixel *src, pixel *dst)
{


    int i, j, blocki, blockj;
    // Block size
    int B = 32;
    for (j = 0; j < dim; j+=B) {
		for (i = 0; i < dim; i+=B) {
			for (blocki = i; blocki < i + B -1; blocki+=2) {
				for (blockj = j; blockj < j + B -1; blockj+=2) {
					dst[RIDX(dim-1-blocki, blockj, dim)] = src[RIDX(blockj, blocki, dim)];
					dst[RIDX(dim-1-blocki, blockj + 1, dim)] = src[RIDX(blockj + 1 , blocki, dim)];
				}
				for (blockj = j; blockj < j + B -1; blockj+=2) {
					dst[RIDX(dim-blocki-2, blockj, dim)] = src[RIDX(blockj, blocki+1, dim)];
					dst[RIDX(dim-blocki-2, blockj + 1, dim)] = src[RIDX(blockj + 1, blocki+1, dim)];
				}
			}
		}
    }
}


char rotate_one_descr[] = "rotate: First tiling attempt";
void attempt_one(int dim, pixel *src, pixel *dst)
{


    int i, j, blocki, blockj, temp_i, temp_j;
    // Block size
    int B = 16;
    for (i = 0; i < dim; i+=B) {
    	temp_i = i + B;
		for (j = 0; j < dim; j+=B) {
			temp_j = j + B;
			for (blocki = i; blocki < temp_i; blocki++) {
				for (blockj = j; blockj < temp_j; blockj++) {
					dst[RIDX(dim-1-blockj, blocki, dim)] = src[RIDX(blocki, blockj, dim)];
				}
			}
		}
    }
}

char rotate_two_descr[] = "rotate: Switching blocki and blockj";
void attempt_two(int dim, pixel *src, pixel *dst)
{


    int i, j, blocki, blockj, temp_i, temp_j;
    // Block size
    int B = 32;
	for (i = 0; i < dim; i+=B) {
		temp_i = i + B;
		for (j = 0; j < dim; j+=B) {
			temp_j = j + B;
			for (blocki = i; blocki < temp_i; blocki++) {
				for (blockj = j; blockj < temp_j; blockj++) {
					dst[RIDX(dim-1-blocki, blockj, dim)] = src[RIDX(blockj, blocki, dim)];
				}
			}
		}
    }
}

char rotate_three_descr[] = "rotate: Switching outer loops";
void attempt_three(int dim, pixel *src, pixel *dst)
{


    int i, j, blocki, blockj;
    // Block size
    int B = 32;
    for (j = 0; j < dim; j+=B) {
		for (i = 0; i < dim; i+=B) {
			for (blocki = i; blocki < i + B; blocki++) {
				for (blockj = j; blockj < j + B; blockj++) {
					dst[RIDX(dim-1-blocki, blockj, dim)] = src[RIDX(blockj, blocki, dim)];
				}
			}
		}
    }
}


/*********************************************************************
 * register_rotate_functions - Register all of your different versions
 *     of the rotate kernel with the driver by calling the
 *     add_rotate_function() for each test function. When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.  
 *********************************************************************/

void register_rotate_functions() 
{
    add_rotate_function(&naive_rotate, naive_rotate_descr);

    add_rotate_function(&rotate, rotate_descr);
    add_rotate_function(&attempt_one, rotate_one_descr);
    add_rotate_function(&attempt_two, rotate_two_descr);
    add_rotate_function(&attempt_three, rotate_three_descr);
    /* ... Register additional rotate functions here */
}

