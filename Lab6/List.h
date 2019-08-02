#ifndef LIST_H_
#define LIST_H_

#include <iostream>
#include <string>
#include "ListNode.h"
using namespace std;

class List{
  friend ostream & operator<<(ostream & OUT, const List & x);

private:
  ListNode* first;
  int sizeOfList;

public:
  List();

  //from Lab4
  void insertAtFront(string);

  //these are the new functions for this lab! updates!
  //___ addAList(string argW); //return address of a specific word in the list or NULL
  void updateFreq(string argW); //taking a word, updates the frequency fo this string to the list

};

#endif /* List_H_ */
