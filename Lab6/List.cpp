#include "List.h"

//default constructor, set first pointer to NULL
List::List(){
  first = NULL;
}

void List::insertAtFront(string argW){
  ListNode* temp = new ListNode(argW, 1, first); //creating new ListNode
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
