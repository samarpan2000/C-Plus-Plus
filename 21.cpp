//Write a program in C++ to calculate the sum of all even and odd numbers in an array.

#include<iostream>

using namespace std;

int main() {

	int arr[1000];
	int sumEven=0;
	int sumOdd=0;
	int size=0;
	int i=0;

	cout<<"enter array size ";
	cin>>size;

	cout<<"enter "<<size<<" number of elements \n";
	for(i=0; i<size; i++) {
		cin>>arr[i];
	}

	for(i=0; i<size; i++) {
		
		if(arr[i]%2==0) {
			sumEven=sumEven+arr[i];
		} 
		else {
			sumOdd=sumOdd+arr[i];
		}
	}

	cout<<"sum of even integer in the array is "<<sumEven<<endl;
	cout<<"sum of odd integer in the array is "<<sumOdd<<endl;

	return 0;
}
