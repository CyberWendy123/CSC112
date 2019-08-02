/*
 * myItem.h
 *
 *  Created on: Feb 1, 2013
 *      Author: davidjohn
 */

#ifndef MYITEM_H_
#define MYITEM_H_

#include <iostream>
#include <string>

using namespace std;
/*
 * David John
 * February 1, 2013
 *
 * Type specification for class myItem.
 *
 */



class myItem
{

friend ostream & operator<<(ostream & OUT, myItem & x);

private:

	string Name;
	int stockNumber;
	string unitDescription;
	int stockMax;
	int unitsOnHand;
	float retailPrice;

public:

	bool restock(const int) ;
	bool sell(const int);
	bool isStockNumber(const int) const;  // <<--- FANCY

	myItem();
	myItem(string,int,string,int,int,float);

};


#endif /* MYITEM_H_ */
