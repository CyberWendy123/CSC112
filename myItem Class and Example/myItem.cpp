/*
 * myItem.cpp
 *
 *  Created on: Feb 1, 2013
 *      Author: David John
 *
 *      Definitions of methods and friend (operator<<)
 *      for class myItem
 */

#include "myItem.h"

// default constructor
myItem::myItem()
{
	Name = "";
    stockNumber= 0;
    unitDescription="";
    stockMax = 0;
    unitsOnHand=0;
    retailPrice=0.0;
}

// pretty complete alternate constructor
myItem::myItem(string myName,int myNumber,string myDes,int mySM, int myUnits,float myRP)
{
	Name = myName;
	stockNumber = myNumber;
	unitDescription = myDes;
	stockMax = mySM;
	unitsOnHand = myUnits;
	retailPrice = myRP;
}

// method to hand a restock
bool myItem::restock(const int number)
{
	if (unitsOnHand+number<=stockMax)
	{
		unitsOnHand += number;
		return true;
	}
	return false;
}

// method to handle a sale
bool myItem::sell(const int number)
{
	if (unitsOnHand-number>=0)
	{
		unitsOnHand -= number;
		return true;
	}
	return false;
}


bool myItem::isStockNumber(const int myNumber) const  //  <<-- FANCY
{
	return myNumber == stockNumber;

}

// friend operator<< overloaded to work with class myItem
ostream & operator<<(ostream & OUT, myItem & x)
{
	OUT << "Name: " << x.Name << endl;
	OUT << "Stock Number: " << x.stockNumber << endl;
	OUT << "Unit Description: " << x.unitDescription << endl;
	OUT << "Maximum stock limit: " << x.stockMax << endl;
	OUT << "Units in stock: " << x.unitsOnHand << endl;
	OUT << "Retail Price: " <<  x.retailPrice << endl;
	return OUT;

}
