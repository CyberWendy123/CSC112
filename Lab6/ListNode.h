#ifndef LISTNODE_H_
#define LISTNODE_H_

#include <iostream>
#include <string>
using namespace std;

class ListNode {
  friend ostream & operator << (ostream & OUT, const ListNode & x);

private:
  string Word;//word of the text
  int Freq;//frequence fo that word
  ListNode * next;

public:
  ListNode(string, int, ListNode*);
  ListNode * getNext() const;
};

#endif /* LISTNODE_H_ */
