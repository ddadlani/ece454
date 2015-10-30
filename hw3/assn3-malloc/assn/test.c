#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>


#include "memlib.h"
#include "mm.h"

void test_array_pos() {
	int test_samples[2][11] = {{1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024}, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};

	int i = 0;
	for (; i < 11; i++) {
		if ((get_array_position(test_samples[1][i])) != (test_samples[2][i]))
			printf("Didn't work\n");
	}

}
int main() {
	test_array_pos();
	return 0;
}
