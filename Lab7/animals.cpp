/*
 * animals.cpp
 *
 *  Created on: Apr 25, 2013
 *      Author: csuser
 */


#include "animals.h"

//default constructor
animals::animals()
{
	location = "";
	food = "";
	type = "";
	age = 0;
}

animals::animals(string l, string n, string f, string t, int a):location(l), food(f), type(t), age(a)
{
}

void animals::updateAGE(const int a)
{
	cout << "animals::updateAGE()" << endl;
	age = a;
}

//animal method operator <()
bool animals::operator<(const animals & x) const
{
	return this -> age < x.age;
}

//animal friend operator <<
ostream & operator << (ostream & OUT, const animals & animal)
{
	OUT << animal.location << " ";
	OUT << animal.food << " ";
	OUT << animal.type << " ";
	OUT << animal.age ;

	return OUT;
}

//animal friend operactor <
//bool operator<(const Student & x, const Student & y)
//{
//		return x.age < y.age;
//{
