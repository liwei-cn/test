/*
 * main.cpp
 *
 *  Created on: Oct 5, 2014
 *      Author: liwei
 */

#include <iostream>
#include "point.h"
using namespace std;


void test()
{
//	    Point q(0.1,0.2);
//	    p = &q;
	    Point *p = new Point(0.3,0.4);
	//	Point p;
	//	p.SetCoordinate(0.9,10.0);
		cout << p->getX() << p->getY();
		delete p;
		p->SetCoordinate(0.9,10.0);
		cout << p->getX() << p->getY();
}

int main(int agrc, char* agrv[])
{

	test();
    cout << "exit!" << endl;

//    cout << p->getX() << p->getY();

	return 0;
}



