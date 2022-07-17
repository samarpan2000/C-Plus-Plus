//Write a program in C++ which swap the values of two variables not using third variable

#include<iostream>

using namespace std;

int main() {
	int a=0;
	int b=0;

	cout<<"enter first integer ";
	cin>>a;
	cout<<"enter second integer ";
	cin>>b;
	cout<<"variables before swapping:- "<<<<endl<<a<<endl<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"variables after swapping:- "<<endl<<a<<endl<<b<<endl;
	return 0;
}
