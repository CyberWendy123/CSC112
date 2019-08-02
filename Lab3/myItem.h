/*
 * myItem.h
 *
 *  Created on: Feb 17, 2013
 *      Author: Wendy
 */

#ifndef MYITEM_H_
#define MYITEM_H_

#include <iostream>
#include <string>
using namespace std;

class myItem
{
	//overload i/o operators
	friend ostream & operator<<(ostream & OUT, const myItem & myW);
	friend istream & operator>>(istream & IN, myItem & myW );

	private:
		string wName;
		int wStockNumber;
		float wValue;
		int StockMax;
		int unitsOnHand;

	public:
		myItem();
		myItem(string, int, float, int, int);

		bool restock(const int number);
		bool sell(const int number);
		bool isStockNumber(const int number) const;
};



#endif /* MYITEM_H_ */
