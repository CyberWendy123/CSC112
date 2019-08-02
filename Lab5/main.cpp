/*
* Lab5: Sorting by Wendy Xiao (xiao12)
* since I wasn't able to find the original code, re-created from July 30, 2019
*/
#include <iostream>
#include <string>
#include "bubbleSort.h"
#include "quickSort.h"
using namespace std;

//function to test if array is sorted
bool inorder(float yyy[], int yyy_size);

int main(){

    //dynamically declare array
    float *mydata;
    int mydata_size;

    //initialize random number generator
    srand(time(NULL));

    //ask for the number of float (array size)
    cout << "Enter the number of floats: ";
    cin >> mydata_size;

    //create and populate the array
    mydata = new float[mydata_size];
    for(int index = 0; index < mydata_size; index++){
        mydata[index] = float(rand())/(RAND_MAX);
        //cout << mydata[index] << endl;
    }

    //grab initial time, call bubblesort, grab finish time
    unsigned tInitial = clock();
    //bubbleSort(mydata, mydata_size);
    quickSort(mydata, mydata_size);
    unsigned tFinal = clock();

    cout << "Elapsed time = " << (tFinal-tInitial) << " clocks ticks" << endl;

    //for(int index = 0; index < mydata_size ; index++ ){
    //  cout << index << ": " << mydata[index] << endl;
    //}

    cout << "List sorted: " << inorder(mydata, mydata_size) << endl;

    return 0;
}

//run through the array, if something is out of order return false
//otherwise return true
bool inorder( float yyy[], int yyy_size){
    for(int index = 0; index << yyy_size - 1; index++){
      if(yyy[index] > yyy[index + 1])
        return false;
    }
    return true;
}
