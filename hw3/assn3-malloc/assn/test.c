#include <stdio.h>
#include <stdlib.h>

int get_free_list_index(unsigned int num_words) {
	if(num_words > (0x1 << 13))
		return 14;

	unsigned int num_set_bits =__builtin_popcount(num_words);

	if (num_set_bits > 1) {	// not a power of 2. Return one position up
		return (sizeof(int) << 3) - __builtin_clz(num_words);
	} else if (num_set_bits == 1) {	// is a power of 2. Return this position
		return (sizeof(int) << 3) - __builtin_clz(num_words)-1;
	} else { // this is a zero. Should not get here
		return -1;
	}
}


void test_array_pos() {
	unsigned int test_samples[] = {1, 2, 3, 4, 5, 8, 16, 32, 48, 64, 76, 128, 256, 512, 1024, 8000, 8192, 8800, 16488, 40000};
	unsigned int test_answers[] = {0, 1, 2, 2, 3, 3, 4, 5, 6, 6, 7, 7, 8, 9, 10, 13, 13, 14, 14, 14};

	int i = 0;
	int len = sizeof(test_samples) >> 2;
	for (i = 0; i < len; i++) {
		unsigned int answer = get_free_list_index(test_samples[i]);
		printf("OK\n");
		if (answer != test_answers[i]) {
			printf("Didn't work!\n");
			printf("Answer: %u\n", answer);
			printf("Test answer: %u\n" , test_answers[i]);
		}
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
