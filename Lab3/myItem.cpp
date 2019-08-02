/*
 * myItem.cpp
 *
 *  Created on: Feb 17, 2013
 *      Author: David John
 */
#include "myItem.h"

//overload friend operator << for myItem class
ostream & operator <<(ostream & OUT, const myItem & myW)
{
	OUT << myW.wName << " " << myW.wStockNumber << " " <<myW.wValue << " " << myW.StockMax << " " << myW.unitsOnHand;
	return OUT;
}

//overload friend operator >> for myItem Class
istream & operator >>(istream & IN, myItem & myW)
{
	IN >> myW.wName;
	IN >> myW.wStockNumber;
	IN >> myW.wValue;
	IN >> myW.StockMax;
	IN >> myW.unitsOnHand;
	return IN;
}


//default construtor
myItem::myItem()
{
	wName = "";
	wStockNumber = 0;
	wValue = 0.0;
	StockMax = 0;
	unitsOnHand = 0;
}

//pretty complete alternate constructor
myItem::myItem(string myName, int myNumber, float myRP, int mySM, int myUnits)
{
	wName = myName;
	wStockNumber = myNumber;
	wValue = myRP;
	StockMax = mySM;
	unitsOnHand = myUnits;
}

//method to hand a restock
bool myItem::restock(const int number)
{
	if(unitsOnHand+number <= StockMax)
	{
		unitsOnHand += number;
		return true;
	}
	return false;
}

bool myItem::sell(const int number)
{
	if (unitsOnHand-number>=0)
	{
		unitsOnHand -= number;
		return true;
	}
	return false;
}

bool myItem::isStockNumber(const int myNumber) const //<<-- fancy
{
	return myNumber == wStockNumber;
}
