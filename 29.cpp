// Write a C++ program to swap first and last digits of any number
#include<iostream>
using namespace std;
int main(){
	int num=0;
	int var=0;
	int copy=0;
	int digit=0;
	int i=0;
	int arr[100];
	
	cout<<"enter how many digit number ";
	cin>>digit;
	cout<<"enter "<<digit<<" digit number ";
	cin>>num;
	
	copy=num;
	while(copy!=0){
		
		var=copy%10;
		arr[i++]=var;
		copy=copy/10;
	}
	
		arr[digit-1]=arr[digit-1]+arr[0];
		arr[0]=arr[digit-1]-arr[0];
		arr[digit-1]=arr[digit-1]-arr[0];
		
		for(i=digit-1;i>=0;i--){
			cout<<arr[i];
		}
	
	
	return 0;
}
