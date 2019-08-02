/*
 * Owl.h
 *
 *  Created on: Apr 29, 2013
 *      Author: csuser
 */

#ifndef OWL_H_
#define OWL_H_

#include <string>
using namespace std;

#include "animals.h"

class Owl : public animals
{
	//Owl friend operator<<()
	friend ostream & operator <<(ostream &, const Owl &);

	//Undergrate pivate class variables
private:
	string living; //tree, nest, etc.
	string color;
	int weight;
public:
	//Owl class constructor
	Owl(string, string, string, int, string, string, int);
};


#endif /* OWL_H_ */
