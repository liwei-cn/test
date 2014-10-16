/*
 * circle.cpp
 *
 *  Created on: Oct 5, 2014
 *      Author: liwei
 */

#include "circle.h"

Circle::Circle(double a, double b, double r): Point(a,b),radius(r)
{
}

Circle::~Circle()
{
	cout << "circle destroyed!" << endl;
}

void Circle::SetRadius(double r)
{
	radius = r;
}

double Circle::GetRadius() const
{
	return radius;
}

double Circle::area() const
{
	return 3.14159*radius*radius;
}

ostream & operator << (ostream &output, const Circle &circle)  //overload this function
{
	output << "Center: " << "(" << circle.x << "," << circle.y << ")" << " , radius: " << circle.radius;
	output << " , area: " << circle.area() << endl;
	return output;
}



