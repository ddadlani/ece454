#include <stdio.h>
#include <stdlib.h>

int get_array_position(unsigned int num_dwords) {

//	unsigned short log2;
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


void test_array_pos() {
	unsigned int test_samples[] = {1, 2, 4, 8, 16, 32, 48, 64, 128, 256, 512};
	unsigned int test_answers[] = {0, 1, 2, 3, 4, 5, 6, 6, 7, 8, 9};

	int i = 0;
	for (i = 0; i < 10; i++) {
		unsigned int answer = get_array_position(test_samples[i]);
		printf("Answer: %u\n", answer);
		printf("Test answer: %u\n" , test_answers[i]);
		if (answer != test_answers[i])
			printf("Didn't work\n");
	}

}

void test_builtin_pop() {
	int num = 15;

	printf("Ones: %d\n",__builtin_popcount(num));

}
int main() {
	test_array_pos();
	test_builtin_pop();
	return 0;
}
