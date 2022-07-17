//Write a program in C++ to enter two angles of a triangle and find the third angle.

#include<iostream>

using namespace std;
int main() {
	float ang1=0;
	float ang2=0;
	cout<<"enter first angle of a triangle ";
	cin>>ang1;
	cout<<"enter second angle of a triangle ";
	cin>>ang2;
	cout<<"the third angle of the  triangle is :- "<<(180-(ang1+ang2))<<endl;
	return 0;
}
