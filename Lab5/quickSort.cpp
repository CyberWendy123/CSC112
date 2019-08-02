/*  note: that this does use a recursive function
*   how do we choose a pivot?
*/
#include <iostream>
#include "quickSort.h"
using namespace std;

void quickSort(float xxx[], int xxx_size){
  quickSort(xxx, 0, xxx_size);
}

void quickSort(float xxx[], int low, int high){

  if(low < high){
    /* pi is partitioning index, arr[p] is now
        at right place*/
    int pi = partition(xxx, low, high);

    quickSort(xxx, low, pi - 1); //before pi
    quickSort(xxx, pi + 1, high); //after pi
  }
}

int partition(float xxx[], int low, int high){
  int pivot = xxx[high];
  int i = (low - 1);

  for(int j = low; j <= high - 1; j++){
    if(xxx[j] <= pivot){
      i++;
      swap(&xxx[i], &xxx[j]);
    }
  }
  swap( &xxx[i + 1], &xxx[high] );
  return (i + 1);
}

void swap(float* a, float* b){
  int t = *a;
  *a = *b;
  *b = t;
}
