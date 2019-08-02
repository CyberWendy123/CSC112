/*
 * List.h
 *
 *  Created on: Feb 27, 2013
 *      Author: davidjohn
 */

#ifndef LIST_H_
#define LIST_H_

#include <iostream>
#include <string>

using namespace std;

#include "ListNode.h"

class List {

	friend ostream & operator<<(ostream & OUT, const List & x);

private:

	ListNode * first;
	ListNode * rear;

public:

	List();

	void InsertAtFront(float, string);
	void DeleteAtFront();
	void InsertAtRear(float, string);
	void DeleteAtRear();
	int Number();
	void Top(); //returns what is at the top
	ListNode * Search(string);
	void Rear();  //returns content at the rear

};

#endif /* LIST_H_ */
