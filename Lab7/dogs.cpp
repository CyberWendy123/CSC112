/*
 * dogs.cpp
 *
 *  Created on: Apr 28, 2013
 *      Author: csuser
 */

#include "dogs.h"

//initialization list
dogs::dogs(string n, string b, int w):
animals(location,food,type,age), name(n), breed(b), weight(w)
{
}

//update age, uses protexted
//animals::updateAGE(const int newAge)
void dogs::dogUpdateAGE(const int newAge)
{
	cout << "dogs::dogUpdateAGE()" << endl;
	updateAGE(newAge);
}

//friend of dogs output operator
ostream & operator <<(ostream & OUT, const dogs & x)
{
	//cal the student output operator
	OUT << (animals) x << " ";

	//output for dogs class
	OUT << x.name << " ";
	OUT << x.breed << " ";
	OUT << x.weight;

	return OUT;
}

