/*
 * main.cpp
 *
 *  Created on: Feb 11, 2013
 *      Author: davidjohn
 */
// File i/o example
//
// David John
// February 2013


#include <iostream>
#include <fstream>
using namespace std;

#include "widget.h"
#include "utilities.h"

int main()
{
	// declare array of widgets
	const int STUFF_PSIZE = 100;
	widget stuff[STUFF_PSIZE];
	int stuff_lsize = 0;

	// read in data and update stuff_lsize
	stuff_lsize = ReadMyData("MyData.txt", stuff,STUFF_PSIZE);

	// manipulate the data
	ManipulateData(stuff,stuff_lsize);

	// write data back
	WriteMyData("MyData.txt", stuff, stuff_lsize);

	return 0;
}
