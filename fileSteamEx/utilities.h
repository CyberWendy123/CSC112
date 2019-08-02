/*
 * utilities.h
 *
 *  Created on: Feb 11, 2013
 *      Author: davidjohn
 */

#ifndef UTILITIES_H_
#define UTILITIES_H_


#include <iostream>
#include <fstream>
using namespace std;

#include "widget.h"

void ManipulateData(widget myData[], const int myData_lsize);
int ReadMyData(string fileName, widget myArray[], const int myArrayPSize);
void WriteMyData(string filename, widget myArray[], const int myArray_lsize);



#endif /* UTILITIES_H_ */
