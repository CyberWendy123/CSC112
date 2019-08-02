/*
 * animals.h
 *
 *  Created on: Apr 25, 2013
 *      Author: csuser
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
#include <string>

using namespace std;

class animals {

	//friend functions
	//friend bool operator<(const animals & x, const animals & y);
	friend ostream & operator <<(ostream &, const animals &)

	//private class variables
	private:
		string location; //land, water, sky
	protected:
		string food;//herbavore, carnivore, omivore
		string type; //mammal reptile etc
		int age;
	public:
		animals();
		animals(string, string, string, int);
		bool operator<(const animals & ) const;
		void updateAGE(const int);
};


#endif /* ANIMALS_H_ */
