/*
 * hash_list_lock.h
 *
 *  Created on: 2015-11-16
 *      Author: saksenag
 */

#ifndef HASH_H
#define HASH_H

#include <stdio.h>
#include "list.h"

#define HASH_INDEX(_addr,_size_mask) (((_addr) >> 2) & (_size_mask))

template<class Ele, class Keytype> class hash;

template<class Ele, class Keytype> class hash {
private:
	unsigned my_size_log;
	unsigned my_size;
	unsigned my_size_mask;
	list<Ele, Keytype> *entries;
	list<Ele, Keytype> *get_list(unsigned the_idx);
	pthread_mutex_t* list_locks;

public:
	void setup(unsigned the_size_log = 5);
	void insert(Ele *e);
	Ele *lookup(Keytype the_key);
	void print(FILE *f = stdout);
	void reset();
	void cleanup();
	Ele *lookup_and_insert_if_absent(Keytype the_key);
};

template<class Ele, class Keytype>
void hash<Ele, Keytype>::setup(unsigned the_size_log) {
	my_size_log = the_size_log;
	my_size = 1 << my_size_log;
	my_size_mask = (1 << my_size_log) - 1;
	list_locks = new pthread_mutex_t[my_size];
	entries = new list<Ele, Keytype> [my_size];
}

template<class Ele, class Keytype>
list<Ele, Keytype> *
hash<Ele, Keytype>::get_list(unsigned the_idx) {
	if (the_idx >= my_size) {
		fprintf(stderr, "hash<Ele,Keytype>::list() public idx out of range!\n");
		exit(1);
	}
	return &entries[the_idx];
}

template<class Ele, class Keytype>
Ele *
hash<Ele, Keytype>::lookup(Keytype the_key) {
	list<Ele, Keytype> *l;
	l = &entries[HASH_INDEX(the_key, my_size_mask)];
	return l->lookup(the_key);
}

template<class Ele, class Keytype>
void hash<Ele, Keytype>::print(FILE *f) {
	unsigned i;

	for (i = 0; i < my_size; i++) {
		entries[i].print(f);
	}
}

template<class Ele, class Keytype>
void hash<Ele, Keytype>::reset() {
	unsigned i;
	for (i = 0; i < my_size; i++) {
		entries[i].cleanup();
	}
}

template<class Ele, class Keytype>
void hash<Ele, Keytype>::cleanup() {
	unsigned i;
	reset();
	delete[] entries;
}

template<class Ele, class Keytype>
void hash<Ele, Keytype>::insert(Ele *e) {
	entries[HASH_INDEX(e->key(), my_size_mask)].push(e);
}

template<class Ele, class Keytype>
Ele *
hash<Ele, Keytype>::lookup_and_insert_if_absent(Keytype the_key) {
	pthread_mutex_lock(&list_locks[HASH_INDEX(the_key, my_size_mask)]);
	Ele* e;
	if (!(e = lookup(the_key))) {
		e = new Ele(the_key);
		insert(e);
	}
	pthread_mutex_unlock(&list_locks[HASH_INDEX(the_key, my_size_mask)]);
	return e;
}

#endif

