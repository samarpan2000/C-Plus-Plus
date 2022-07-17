//Write a program in C++ to enter length in centimeter and convert it into meter and kilometer.

#include<iostream>
using namespace std;
int main(){
	
	float l=0;
	
	cout<<"enter length in centimeter ";
	cin>>l;
	
	cout<<l<<" in meter is :- "<<(l/100)<<endl;
	cout<<l<<" in kilometer is :- "<<(l/100000)<<endl;
	return 0;
}
