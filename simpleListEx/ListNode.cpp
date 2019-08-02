/*
 * ListNode.cpp
 *
 *  Created on: Feb 27, 2013
 *      Author: davidjohn
 */

#include "ListNode.h"

ListNode::ListNode(float W, string S, ListNode * Ptr)
{
	Weight = W;
	Name = S;
	next = Ptr;
}

ListNode * ListNode::getNext() const
{
	return next;
}


ostream & operator<<(ostream & OUT, const ListNode & x)
{
	OUT << x.Weight << " ";
	OUT << x.Name << "  ";
	OUT << dec << x.next << dec;
	return OUT;
}
