//Write a C++ program to read seven numbers and sorts them in descending order.

#include<iostream>
using namespace std;
int main(){
	int i=0;
	int j=0;
	int arr[7];
	
	cout<<"enter 7 elements \n";
	
	for(i=0;i<7;i++){
		cin>>arr[i];
	}
	cout<<"before sorting in descending order\n";
	
	for(i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
	for(i=0;i<7-1;i++){
		for(j=0;j<7-i-1;j++){
			if(arr[j]<=arr[j+1]){
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
		}
	}
	cout<<"\nafter sorting in descending order\n";
	
	for(i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
