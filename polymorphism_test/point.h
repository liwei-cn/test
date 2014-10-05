/*
 * point.h
 *
 *  Created on: Oct 5, 2014
 *      Author: liwei
 */

#ifndef POINT_H_
#define POINT_H_

#include <iostream>
using namespace std;

class Point{
public:
     Point(double , double); //define the default parameter in the declaration
     Point();
     ~Point();
     void SetCoordinate(double, double);
     double getX() const;
     double getY() const;
     friend ostream & operator << (ostream &, const Point&);

protected:
     double x, y;
};



#endif /* POINT_H_ */
