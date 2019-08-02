/*
 * widget.cpp
 *
 *  Created on: Feb 11, 2013
 *      Author: David John
 */
#include "widget.h"


// overloaded friend operator<< for widget class
ostream & operator<<(ostream & OUT, const widget & myW)
{
	OUT << myW.wName << " " << myW.wValue;
	return OUT;
}

// overloaded friend operator>> for widget class
istream & operator>>(istream & IN, widget & myW)
{
	IN >> myW.wName;
	IN >> myW.wValue;
	return IN;
}


// default constructor
widget::widget()
{
	wName = "";
	wValue = 0.0;
}
