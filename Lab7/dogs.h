/*
 * dogs.h
 *
 *  Created on: Apr 28, 2013
 *      Author: csuser
 */

#ifndef DOGS_H_
#define DOGS_H_

#include <tring>
using namespace std;

#include "animals.h"

class dogs : public animals
{
	friend ostream & operator <<(ostream &, const dogs &);

	//private dog class variables
private:
	string name;
	string breed;
	int weight;
public:
	//constructor
	dogs(string, string, int);

	//void dogUpdateAGE(const int newAge);
	//updateAGE() that overloads animals::updateAGE()
	void dogUpdateAGE(const int newAge);
};


#endif /* DOGS_H_ */
