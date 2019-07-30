/*
 * distance.cpp
 *
 *  Created on: Jan 28, 2013
 *      Author: Wendy Xiao
 */

#include "distance.h"
#include <cmath>

//finds the distance between two points
float distance (float x1, float x2, float y1, float y2)
{
	float temp = ((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2));
	return sqrt(temp);
}
