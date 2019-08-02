#include <iostream>
#include "bubbleSort.h"
using namespace std;

void bubbleSort(float xxx[], int xxx_size){
  for(int numpass = 0; numpass < xxx_size-1 ; numpass++){
    //compare xxx[index] with xxx[index-1]
    for(int index = xxx_size-1; index > numpass; index--){
      //if order is wrong, swap them
      if(xxx[index] < xxx[index-1]){
        float temp = xxx[index];
        xxx[index] = xxx[index-1];
        xxx[index-1] = temp; 
      }
    }
  }
  return;
}
