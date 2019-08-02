/*
 * utilities.cpp
 *
 *  Created on: Feb 11, 2013
 *      Author: davidjohn
 */
#include "utilities.h"


// manipulate my data
void ManipulateData(widget myData[], const int myData_lsize)
{

	// show you really got it
		cout << "Number of items read: " << myData_lsize << endl;

		for(int index=0; index<myData_lsize;index++)
		{
			cout << myData[index] << endl;
		}

}


// function to read the data into the array from the file
int ReadMyData(string fileName, widget myArray[], const int myArrayPSize)
{
		int myArray_lsize = 0;

	// create and open input file, extract data from it, close when done
	// string fileName must be converted to a cstring before passing it
	// into open()
		ifstream INPUT;
		INPUT.open(fileName.c_str());  // <<-----
		while (INPUT >> myArray[myArray_lsize])  //   <---  LOOK AT THIS
		{
			myArray_lsize++;
		}

		INPUT.close();

		return myArray_lsize;

}

void WriteMyData(string filename, widget myArray[], const int myArray_lsize)
{
	ofstream OUTPUT;
	OUTPUT.open(filename.c_str());
	for(int index=0;index<myArray_lsize;index++)
	{
		OUTPUT << myArray[index] << endl;

	}

	OUTPUT.close();
}
