/*
 * main.cpp
 *
 *  Created on: Jan 25, 2013
 *      Author: Wendy Xiao
 */

//this is my program to compute and prompt and read for
//four int values and then output the distance through
//using functions
//Then using another function, will determine the
//average of two numbers

#include <iostream>
#include "distance.h"
#include "maxinum.h"

using namespace std;

int main()
{
	//local varialbes to hold the four intergers
	float val1;
	float val2;
	float val3;
	float val4;

	//prompt and read for four intergers
	cout << "Enter four numbers: " ;
	cin >> val1 >> val2 >> val3 >> val4;

	//use the function in order to find the distance
	float d = distance (val1, val2, val3, val4);

	//DEBUG: checks values
	//cout << val1 << val2 << val3 << val4;

	//output the distance
	cout << "The distance of the two points is " ;
	cout << d << endl;

	//then, using the intergers, figures out which
	//is larger
	cout << "Enter two numbers: ";
	cin >> val1 >> val2;

	//finds the max
	float max = maxinum(val1, val2);

	//outputs the max
	cout<< "The max of the two numbers is " ;
	cout << max << endl;
}
