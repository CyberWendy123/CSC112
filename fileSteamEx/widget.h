/*
 * widget.h
 *
 *  Created on: Feb 11, 2013
 *      Author: davidjohn
 */
// Simple widget class
//
//  David John
//  February 2013


#ifndef WIDGET_H_
#define WIDGET_H_

#include <iostream>
#include <string>
using namespace std;

class widget
{
	// overloaded i/o operators
	friend ostream & operator<<(ostream & OUT, const widget & myW);
	friend istream & operator>>(istream & IN, widget & myW);

private:
	string wName;
	float wValue;

public:

	widget();
};


#endif /* WIDGET_H_ */
