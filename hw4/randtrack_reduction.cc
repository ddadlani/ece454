/*
 * randtrack_reduction.cc
 *
 *  Created on: 2015-11-17
 *      Author: saksenag
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include "defs.h"
#include "hash_reduction.h"

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

class sample {
	unsigned my_key;
public:
	sample *next;
	unsigned count;

	sample(unsigned the_key) {
		my_key = the_key;
		count = 0;
	}
	;
	unsigned key() {
		return my_key;
	}
	void print(FILE *f) {
		printf("%d %d\n", my_key, count);
	}
};

// This instantiates an empty hash table
// it is a C++ template, which means we define the types for
// the element and key value here: element is "class sample" and
// key value is "unsigned".
hash<sample, unsigned> *h_array;

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

	// a separate hash for each thread
	// using the last array element as the combined hash
	h_array = new hash<sample, unsigned> [num_threads + 1];

	int thread_index;
	for (thread_index = 0; thread_index < (num_threads + 1); thread_index++) {
		// initialize a 16K-entry (2**14) hash of empty lists
		h_array[thread_index].setup(14);
	}

	// array of threads
	pthread_t thrd[num_threads];

	for (thread_index = 0; thread_index < num_threads; thread_index++) {
		int *tid = new int();
		if (tid == NULL) {
			fprintf(stderr, "Couldn't allocate memory for thread tid.\n");
			exit(EXIT_FAILURE);
		}
		*tid = thread_index;
		pthread_create(&thrd[thread_index], NULL, process_samples, tid);
	}
	for (thread_index = 0; thread_index < num_threads; thread_index++)
		pthread_join(thrd[thread_index], NULL);

	unsigned hash_index, list_index;
	list<sample, unsigned>* l;
	// combine all hashes in hash[num_threads] position
	for (hash_index = 0; hash_index < h_array[0].size(); hash_index++) {
		for (thread_index = 0; thread_index < num_threads; thread_index++) {
			l = h_array[thread_index].get_list(hash_index);
			sample* s;
			while ((s = l->pop())) {
				sample* s2;
				if ((s2 = h_array[num_threads].lookup(s->key()))) {
					s2->count += s->count;
				} else {
					s2 = new sample(s->key());
					s2->count = s->count;
					h_array[num_threads].insert(s2);
				}
			}
		}
	}
	// print a list of the frequency of all samples
	h_array[num_threads].print();
}

void* process_samples(void* p) {
	int i, j, k, num_seed_streams, stream_init, stream_end, thread_id;
	thread_id = (*(int *) p);
	num_seed_streams = NUM_SEED_STREAMS / num_threads;
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
			if (!(s = h_array[thread_id].lookup(key))) {
				//printf("%d: inserting new element...\n", thread_id);
				// insert a new element for it into the hash table
				s = new sample(key);
				h_array[thread_id].insert(s);
			}
			if (s) {
				//printf("%d: element already exists...\n", thread_id);
			}
			// increment the count for the sample
			s->count++;
		}
	}
	return NULL;
}

