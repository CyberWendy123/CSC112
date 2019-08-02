/*
 * mymain.cpp
 *
 *  Created on: Feb 27, 2013
 *      Author: davidjohn
 */

#include <iostream>
#include <string>

using namespace std;

#include "List.h"
#include "ListNode.h"

int main()
{
	List mylist;
	cout << mylist << endl;

	mylist.InsertAtFront(88,"Twiggy");

	//cout << mylist << endl;

	mylist.InsertAtFront(438, "Harding");
	mylist.InsertAtRear(343, "James");
	mylist.InsertAtRear(323, "Kevin");
	mylist.DeleteAtRear();

	cout << mylist << endl;

	return 0;
}
