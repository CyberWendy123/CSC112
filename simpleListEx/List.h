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

public:

	List();

	void InsertAtFront(float, string);

};

#endif /* LIST_H_ */
