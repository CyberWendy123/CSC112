/*
 * utilities.h
 *
 *  Created on: Feb 17, 2013
 *      Author: davidJohn
 */

#ifndef UTILITIES_H_
#define UTILITIES_H_

#include <iostream>
#include <fstream>
using namespace std;

#include "myItem.h"

void ManipulateData(myItem myData[], const int myData_lsize);
int ReadMyData(string fileName, myItem myArray[], const int myArrayPSize);
void WriteMyData(string filename, myItem myArray[], const int myArray_lsize);
void processInventory (myItem stuff[], int stuff_lsize);
int getInventoryIndex(const myItem myArray[], const int myArray_lsize, int stockNumber);

#endif /* UTILITIES_H_ */
