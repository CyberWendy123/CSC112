/*
 * utilities.cpp
 *
 *  Created on: Feb 17, 2013
 *      Author: davidJohn
 */

#include "utilities.h"
using namespace std;

//manipulate my data
void ManipulateData(myItem myData[], const int myData_lsize)
{
	//show you how many items are in the shop
	//aka the txt file
	cout<<"Welcome to MoshiMoshi's supermarket program" <<endl;
	cout<<"Current inventory of items read: " <<myData_lsize << endl;

}

//function to read the data into the array from the file
int ReadMyData(string fileName, myItem myArray[], const int myArrayPSize)
{
	int myArray_lsize = 0;
	//create and open input file, extract data from it, close when done
	//string fileName must be converted to a cstring before passing it
	//int open()
	ifstream INPUT;
	INPUT.open(fileName.c_str()); // <<---
	while (INPUT >> myArray[myArray_lsize]) //<--- LOOK AT THIS
	{
		myArray_lsize++;
	}

	INPUT.close();

	return myArray_lsize;
}

void WriteMyData(string filename, myItem myArray[], const int myArray_lsize)
{
	ofstream OUTPUT;
	OUTPUT.open(filename.c_str());
	for(int index = 0; index < myArray_lsize; index++ )
	{
		OUTPUT << myArray[index] << endl;
	}
	OUTPUT.close();
}

//user interface

int getInventoryIndex(const myItem myArray[], const int myArray_lsize, int stockNumber)
{
	for(int index = 0; index < myArray_lsize; index++)
	{
		if(myArray[index].isStockNumber(stockNumber))
		{
			return index;
		}
	}
	return myArray_lsize;
}

void processInventory (myItem stuff[], int stuff_lsize)
{
	//variables for user interface
	int stockUnits;
	int stockNumber;
	string action;

	//prompt and read information
	cout<<"Enter interface [enter 'stop' to end]: ";
	cin >> action;

	//loop until "stop
	while(action!="stop")
	{
		//extract stock number from inputStream
		cin >> stockNumber;


		int stockIndex  = getInventoryIndex(stuff, stuff_lsize, stockNumber);

		//actions
		if(action == "sell")
		{
			//extract units
			cin >> stockUnits;
			//selling
			if(stockIndex != stuff_lsize)
			{
				if(!stuff[stockIndex].sell(stockUnits))
				{
					cout << "Error in sale" << endl;
				}
			}
		}
		else if(action == "restock")
		{
			cin >> stockUnits;
			if(stockIndex != stuff_lsize)
			{
				if(!stuff[stockIndex].restock(stockUnits))
				{
					cout<<"Error in restock" << endl;
				}
			}
		}
		//show everything
		/*else if(action == "inventory")
		{
			cout<< stuff[stockIndex] << endl;
		}*/
		//illegal command
		else
		{
			cout<< "Illegal command specified" << endl;
		}

		//prompt and read
		cout<<"Enter interface [enter 'stop' to end]: ";
		cin >> action;

	}
	//we are done!
	cout << "Program stopped and saved" << endl;
}
