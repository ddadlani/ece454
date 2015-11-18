/*
 * randtrack_global_lock.cc
 *
 *  Created on: 2015-11-13
 *      Author: dadlanid
 */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include "defs.h"
#include "hash.h"

#define SAMPLES_TO_COLLECT   10000000
#define RAND_NUM_UPPER_BOUND   100000
#define NUM_SEED_STREAMS            4

/*
 * ECE454 Students:
 * Please fill in the following team struct
 */
team_t team = {
    "Basilisk",                  /* Team name */

    "Divya Dadlani",                    /* First member full name */
    "999181772",                 /* First member student number */
    "divya.dadlani@mail.utoronto.ca",                 /* First member email address */

    "Geetika Saksena",                           /* Second member full name */
    "998672191",                           /* Second member student number */
    "geetika.saksena@mail.utoronto.ca"                            /* Second member email address */
};

unsigned num_threads;
unsigned samples_to_skip;
pthread_mutex_t global_mutex = PTHREAD_MUTEX_INITIALIZER;
class sample;

class sample {
  unsigned my_key;
 public:
  sample *next;
  unsigned count;

  sample(unsigned the_key){my_key = the_key; count = 0;};
  unsigned key(){return my_key;}
  void print(FILE *f){printf("%d %d\n",my_key,count);}
};

// This instantiates an empty hash table
// it is a C++ template, which means we define the types for
// the element and key value here: element is "class sample" and
// key value is "unsigned".
hash<sample,unsigned> h;

void *process_streams(void *thread_id);

int
main (int argc, char* argv[]){


  // Print out team information
  printf( "Team Name: %s\n", team.team );
  printf( "\n" );
  printf( "Student 1 Name: %s\n", team.name1 );
  printf( "Student 1 Student Number: %s\n", team.number1 );
  printf( "Student 1 Email: %s\n", team.email1 );
  printf( "\n" );
  printf( "Student 2 Name: %s\n", team.name2 );
  printf( "Student 2 Student Number: %s\n", team.number2 );
  printf( "Student 2 Email: %s\n", team.email2 );
  printf( "\n" );

  // Parse program arguments
  if (argc != 3){
    printf("Usage: %s <num_threads> <samples_to_skip>\n", argv[0]);
    exit(1);
  }
  sscanf(argv[1], " %d", &num_threads); // not used in this single-threaded version
  sscanf(argv[2], " %d", &samples_to_skip);

  // initialize a 16K-entry (2**14) hash of empty lists
  h.setup(14);
  int thread_id;
  pthread_t threads[4];
  int i;

  	// array of threads
  	pthread_t thrd[num_threads];

  	for (i = 0; i < num_threads; i++) {
  		int *tid = new int();
  		if (tid == NULL) {
  			fprintf(stderr, "Couldn't allocate memory for thread tid.\n");
  			exit(EXIT_FAILURE);
  		}
  		*tid = i;
  		pthread_create(&thrd[i], NULL, process_streams, tid);
  	}
  	for (i = 0; i < num_threads; i++)
  		pthread_join(thrd[i], NULL);

  // print a list of the frequency of all samples
    h.print();
}


void *process_streams(void *thread_id) {
	pthread_mutex_lock(&global_mutex);
	  int i,j,k;
	  int rnum;
	  unsigned key;
	  sample *s;
	  int max_streams = NUM_SEED_STREAMS;
	  switch (num_threads) {
	  case 1:
		  i = 0;
		  break;
	  case 2:
		  i = (*(int *)thread_id == 0) ? 0 : 2;
		  max_streams = (*(int *)thread_id == 0) ? 2 : 4;
		  break;
	  case 3:
		  // no op
		  i = 0;
		  break;
	  case 4:
		  i = *(int *)thread_id;
		  max_streams = i + 1;
		  break;
	  }
// process streams starting with different initial numbers
  for (; i < max_streams; i++){
	  printf("i = %d\n", i);
    rnum = i;

    // collect a number of samples
    for (j=0; j<SAMPLES_TO_COLLECT; j++){

      // skip a number of samples
      for (k=0; k<samples_to_skip; k++){
	rnum = rand_r((unsigned int*)&rnum);
      }

      // force the sample to be within the range of 0..RAND_NUM_UPPER_BOUND-1
      key = rnum % RAND_NUM_UPPER_BOUND;

      // if this sample has not been counted before
      if (!(s = h.lookup(key))){

	// insert a new element for it into the hash table
	s = new sample(key);
	h.insert(s);
      }

      // increment the count for the sample
      s->count++;
    }
  }
	pthread_mutex_unlock(&global_mutex);

  return NULL;
}

