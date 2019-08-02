/*
 * List.cpp
 *
 *  Created on: Mar 6, 2013
 *      Author: csuser
 */

#include "List.h"


//default constructor, set first pointer to NULL
List::List()
{
	first = NULL;
}

// Insert new information at the beginning of the list
void List::InsertAtFront(float W, string S)
{
	// create new ListNode
	ListNode * temp = new ListNode(W,S,first);

	//special case
	if(first == NULL)
	{
		rear = temp;
	}
	// reestablish first pointer
	first = temp;
}

void List::InsertAtRear(float W, string S)
{
	//create new ListNode
	ListNode * temp = new ListNode(W, S, rear);
	if(rear == NULL )
	{
		first = rear =  temp;
	}
	else
	{
		rear -> next = temp;
		temp -> next =NULL;
		rear = temp;
	}
}

int List::Number()
{
	int count;
	for(ListNode * ptr = first; first != NULL; ptr = first -> next)
	{
		count++;
	}
	return count;
}


void List::DeleteAtRear()
{
	if(rear == NULL)
	{
		return ;
	}
	//deleting pointer
	ListNode * temp = rear;
	rear = rear -> next;
	cout << *rear << endl;
	delete temp;
}

//delete information at the beginning of the list
void List::DeleteAtFront()
{
	if(first == NULL)
	{
		return;
	}
	ListNode * temp = first;
	first = temp -> next;
	delete temp;
	if(first == NULL)
	{
		rear = NULL;
	}
}

void List::Top()
{
	cout << *first <<endl;
}


void List::Rear()
{
	cout << *rear << endl;
}

ListNode * List::Search(string search)
{
	for(ListNode * ptr = first; ptr != NULL; ptr = first -> next)
	{
		if(search == ptr -> Name)
		{
			return ptr;
		}
	}
	return NULL;
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
