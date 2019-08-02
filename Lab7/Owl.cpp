/*
 * Owl.cpp
 *
 *  Created on: Apr 29, 2013
 *      Author: csuser
 */

#include "Owl.h"

//Owl class constructor
Owl::Owl(string loc, string fo, string ty, int a, string live, string col, int wei)
	:animals(location,food,type,age), living(live), color(col), weight(wei)
{
}

//Owl friend operator <<()
//due to protector, avaliabe to this operator<<()
ostream & operator <<(ostream & OUT, const Owl & x)
{
	//OUT << (animals) x << " ";
	OUT << x.location << " ";
	OUT << x.food << " ";
	OUT << x.type << " ";
	OUT << x.age << " ";
	OUT << x.living << " ";
	OUT << x.color << " ";
	OUT << x.weight;

	return OUT;
}

