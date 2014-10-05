//============================================================================
// Name        : vector_pass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

class MyVector{
	private:
	   double a;
	public:
	   MyVector(double);
	   void print();
};

MyVector::MyVector(double b){
	a = b;
}

void MyVector::print(){
	cout << "value: " << a << endl;
}

void show_vector(std::vector <MyVector>& array_vector)
{
	for (unsigned i = 0; i < 5; i++){
		array_vector[i].print();
	}
}

int main() {
	MyVector vect(0.5);

	std::vector <MyVector> array_vector;
	for (unsigned i = 0; i < 5; i++){

		array_vector.push_back(MyVector(i));
		array_vector[i].print();
	}

	cout << "size of array: " << array_vector.size() << endl;

	show_vector(array_vector);
	vect.print();
	return 0;
}
