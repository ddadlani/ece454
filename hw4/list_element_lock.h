/*
 * list_element_lock.h
 *
 *  Created on: 2015-11-16
 *      Author: saksenag
 */
#ifndef LIST_H
#define LIST_H

#include <stdio.h>

template<class Ele, class Keytype> class list;

template<class Ele, class Keytype> class list {
private:
	Ele *my_head;
	unsigned long long my_num_ele;
public:
	list() {
		my_head = NULL;
		my_num_ele = 0;
	}

	void setup();

	unsigned num_ele() {
		return my_num_ele;
	}

	Ele *head() {
		return my_head;
	}
	Ele *lookup(Keytype the_key);
	Ele *lookup_and_push_if_absent(Keytype the_key);

	void push(Ele *e);
	Ele *pop();

	void print(FILE *f = stdout);

	void cleanup();
};

template<class Ele, class Keytype>
void list<Ele, Keytype>::setup() {
	my_head = NULL;
	my_num_ele = 0;
}

template<class Ele, class Keytype>
void list<Ele, Keytype>::push(Ele *e) {
	e->next = my_head;
	my_head = e;
	my_num_ele++;
	pthread_mutex_unlock(e->lock());
}

template<class Ele, class Keytype>
Ele *
list<Ele, Keytype>::pop() {
	Ele *e;
	e = my_head;
	if (e) {
		my_head = e->next;
		my_num_ele--;
	}
	return e;
}

template<class Ele, class Keytype>
void list<Ele, Keytype>::print(FILE *f) {
	Ele *e_tmp = my_head;

	while (e_tmp) {
		e_tmp->print(f);
		e_tmp = e_tmp->next;
	}
}

template<class Ele, class Keytype>
Ele *
list<Ele, Keytype>::lookup(Keytype the_key) {
	Ele *e_tmp = my_head;

	while (e_tmp && (e_tmp->key() != the_key)) {
		e_tmp = e_tmp->next;
	}

	// create a new element
	if (!e_tmp) {
		e_tmp = new Ele(the_key);
	}

	// lock element so that it is not pushed twice
	pthread_mutex_lock(e_tmp->lock());
	return e_tmp;
}

template<class Ele, class Keytype>
void list<Ele, Keytype>::cleanup() {
	Ele *e_tmp = my_head;
	Ele *e_next;

	while (e_tmp) {
		e_next = e_tmp->next;
		delete e_tmp;
		e_tmp = e_next;
	}
	my_head = NULL;
	my_num_ele = 0;
}

template<class Ele, class Keytype>
Ele *
list<Ele, Keytype>::lookup_and_push_if_absent(Keytype the_key) {
	Ele *e_tmp = my_head;

	while (e_tmp && (e_tmp->key() != the_key)) {
		e_tmp = e_tmp->next;
	}

	// create a new element
	if (!e_tmp) {
		e_tmp = new Ele(the_key);
		pthread_mutex_lock(e_tmp->lock());
		// insert to list
		e_tmp->next = my_head;
		my_head = e_tmp;
		my_num_ele++;
	} else {
		pthread_mutex_lock(e_tmp->lock());
	}

	return e_tmp;
}

#endif




