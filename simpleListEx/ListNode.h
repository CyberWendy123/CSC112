/*
 * ListNode.h
 *
 *  Created on: Feb 27, 2013
 *      Author: davidjohn
 */

#ifndef LISTNODE_H_
#define LISTNODE_H_

#include <iostream>
#include <string>

using namespace std;

class ListNode {

	friend ostream & operator<<(ostream & OUT, const ListNode & x);

private:
	float Weight;
	string Name;
	ListNode * next;

public:
	ListNode(float, string, ListNode *);

	ListNode * getNext() const;
};

#endif /* LISTNODE_H_ */
