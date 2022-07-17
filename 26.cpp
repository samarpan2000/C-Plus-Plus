//Write a program in C++ to calculate area of an equilateral triangle.

#include<iostream>


using namespace std;

int main() {

	float side=0;
	cout<<"enter side of the triangle ";
	cin>>side;
	cout<<"the area of equilateral triangle is :- "<<((1.732/4)*side*side)<<endl;

	return 0;
}
