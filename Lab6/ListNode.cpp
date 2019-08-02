#include "ListNode.h"

ListNode::ListNode(string argW, int argF, ListNode* Ptr){
  Word = argW;
  Freq = argF;
  next = Ptr;
}

ListNode * ListNode::getNext() const{
  return next;
}

ostream & operator<<(ostream & OUT, const ListNode & x){
  OUT << x.Word << " ";
  OUT << x.Freq << " ";
  OUT << dec << x.next << dec;
  return OUT;
}
