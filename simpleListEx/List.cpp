/*
 * List.cpp
 *
 *  Created on: Feb 27, 2013
 *      Author: davidjohn
 */

#include "List.h"


// default constructor, set first pointer to NULL
List::List()
{
	first = NULL;
}


// Insert new information at the beginning of the list
void List::InsertAtFront(float W, string S)
{
	// create new ListNode
	ListNode * temp = new ListNode(W,S,first);

	// reestablish first pointer
	first = temp;
}


// friend output operator for List
ostream & operator<<(ostream & OUT, const List & x)
{

	// show the first pointer
	OUT << hex << x.first << dec << endl;

	// show all nodes in the list
	for(ListNode * ptr = x.first; ptr != NULL; ptr=ptr->getNext())
	{
		OUT << *ptr << endl;
	}

	return OUT;
}
