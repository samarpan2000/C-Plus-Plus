//Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character

#include<iostream>

using namespace std;

int main() {
	char c=0;
	cout<<"enter any character ";
	cin>>c;

	cout<<"the corresponding ASCII code of "<<c<<" is :- "<<(int)c<<endl;
	return 0;
}
