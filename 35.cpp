//Write a C++ program to read an integer n and prints the factorial of n, assume that n = 10.
#include<iostream>
using namespace std;
int main(){
	int i=0;
	int n=0;
	int fact=1;
	cout<<"enter any integer ";
	cin>>n;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<"factorial of "<<n<<" is :- "<<fact;
}
