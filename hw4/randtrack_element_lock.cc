/*
 * randtrack_element_lock.cc
 *
 *  Created on: 2015-11-16
 *      Author: saksenag
 */
/*
 * randtrack_listlock.cc
 *
 *  Created on: 2015-11-13
 *      Author: saksenag
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include "defs.h"
#include "hash_element_lock.h"

#define SAMPLES_TO_COLLECT   10000000
#define RAND_NUM_UPPER_BOUND   100000
#define NUM_SEED_STREAMS            4

/*
 * ECE454 Students:
 * Please fill in the following team struct
 */
team_t team = { "Basilisk", /* Team name */

"Divya Dadlani", /* First member full name */
"999181772", /* First member student number */
"divya.dadlani@mail.utoronto.ca", /* First member email address */

"Geetika Saksena", /* Second member full name */
"998672191", /* Second member student number */
"geetika.saksena@mail.utoronto.ca" /* Second member email address */
};

unsigned num_threads;
unsigned samples_to_skip;

class sample;

void* process_samples(void* thread_num);
//int pthread_mutex_lock(pthread_mutex_t *mutex);

class sample {
	unsigned my_key;
	pthread_mutex_t* my_lock;
public:
	sample *next;
	unsigned count;

	sample(unsigned the_key) {
		my_key = the_key;
		count = 0;
		my_lock = new pthread_mutex_t();
	}
	;
	unsigned key() {
		return my_key;
	}

	pthread_mutex_t* lock() {
		return my_lock;
	}

	void print(FILE *f) {
		printf("%d %d\n", my_key, count);
	}
};

// This instantiates an empty hash table
// it is a C++ template, which means we define the types for
// the element and key value here: element is "class sample" and
// key value is "unsigned".
hash<sample, unsigned> h;

int main(int argc, char* argv[]) {

	// Print out team information
	printf("Team Name: %s\n", team.team);
	printf("\n");
	printf("Student 1 Name: %s\n", team.name1);
	printf("Student 1 Student Number: %s\n", team.number1);
	printf("Student 1 Email: %s\n", team.email1);
	printf("\n");
	printf("Student 2 Name: %s\n", team.name2);
	printf("Student 2 Student Number: %s\n", team.number2);
	printf("Student 2 Email: %s\n", team.email2);
	printf("\n");

	// Parse program arguments
	if (argc != 3) {
		printf("Usage: %s <num_threads> <samples_to_skip>\n", argv[0]);
		exit(1);
	}
	sscanf(argv[1], " %d", &num_threads); // not used in this single-threaded version
	sscanf(argv[2], " %d", &samples_to_skip);

	// initialize a 16K-entry (2**14) hash of empty lists
	h.setup(14);

	int i;
	pthread_t thrd[num_threads];

	for (i = 0; i < num_threads; i++) {
		int *tid = new int();
		if (tid == NULL) {
			fprintf(stderr, "Couldn't allocate memory for thread id.\n");
			exit(EXIT_FAILURE);
		}
		*tid = i;
		pthread_create(&thrd[i], NULL, process_samples, tid);
	}
	for (i = 0; i < num_threads; i++)
		pthread_join(thrd[i], NULL);

	// print a list of the frequency of all samples
	h.print();
}

void* process_samples(void* p) {
	int i, j, k, num_seed_streams, stream_init, stream_end, thread_id;
	thread_id = (*(int *) p);
	num_seed_streams = NUM_SEED_STREAMS / num_threads;
	//printf("Thread %d id is: %d\n", pthread_self(), thread_id);
	stream_init = num_seed_streams * thread_id;
	stream_end = num_seed_streams * (thread_id + 1);
	int rnum;
	unsigned key;
	sample *s;

	// process streams starting with different initial numbers
	for (i = stream_init; i < stream_end; i++) {
		rnum = i;

		// collect a number of samples
		for (j = 0; j < SAMPLES_TO_COLLECT; j++) {

			// skip a number of samples
			for (k = 0; k < samples_to_skip; k++) {
				rnum = rand_r((unsigned int*) &rnum);
			}

			// force the sample to be within the range of 0..RAND_NUM_UPPER_BOUND-1
			key = rnum % RAND_NUM_UPPER_BOUND;

			// if this sample has not been counted before
			s = h.lookup_and_insert_if_absent(key);

			s->count++;
			pthread_mutex_unlock(s->lock());
		}
	}
	return NULL;
}





