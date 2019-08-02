/*
 * main.cpp
 *
 *  Created on: Feb 1, 2013
 *      Author: David John
 *
 *      Testing program for myItem class
 */

#include "myItem.h"

int main()
{

	// my two special items
	myItem x("Cheerios",176,"box",100,65,2.47);
	myItem y("Tomato Soup",4678,"Number 10 can",250,120, 0.89);

	// local variables used in stream input
	string action;
	int stockNumber;
	int stockUnits;

	// prompt and read user information, actually extract information
	// from input stream as needed
	cout << "Enter <action> <stock number> <units>: ";
	cin >> action;

	// loop until "stop"
	while(action!="stop")
	{
		// extract the stock number from the input stream
		cin >> stockNumber;

		// handle action sell
		if (action=="sell")
		{
			// extract units
			cin >> stockUnits;

			// sell x
			if (x.isStockNumber(stockNumber) )
			{
				if (!x.sell(stockUnits))
				{
					cout << "Error on sale on x" << endl;
				}
			}
			// sell y
			else if (y.isStockNumber(stockNumber))
			{
				if (!y.sell(stockUnits))
				{
					cout << "Error on sale on y" << endl;
				}
			}
			// illegal sale
			else
			{
				cout << "Illegal stock number specified on <sell>" << endl;
			}
		}

		// restock transaction
		else if (action=="restock")
		{
			// extract stock units
			cin >> stockUnits;

			// restock x
			if (x.isStockNumber(stockNumber))
			{
				if(!x.restock(stockUnits))
				{
					cout << "Error on restock on x" << endl;
				}
			}
			// restock y
			else if (y.isStockNumber(stockNumber))
			{
				if (!y.restock(stockUnits))
				{
					cout << "Error on restock on y" << endl;
				}
			}
			// illegal restock
			else
			{
				cout << "Illegal stock number specified on <restock>" << endl;
			}
		}

		// dump transaction
		else if (action=="dump")
		{

			// dump x
			if (x.isStockNumber(stockNumber))
			{
				cout << x << endl;
			}
			// dump y
			else if (y.isStockNumber(stockNumber))
			{
				cout << y << endl;
			}
			// illegal dump
			else
			{
				cout << "Illegal stock number" << endl;
			}
		}
		// illegal command
		else
		{
			cout << "Illegal command specified" << endl;
		}

		// prompt and read for next iteration of the loop
		cout << "Enter <action> <stock number> <units>: ";
		cin >> action;

	}

	// we are done!!!
	cout << "Program stopping" << endl;
	return 0;
}
