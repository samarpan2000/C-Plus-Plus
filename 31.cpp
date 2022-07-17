//Write a C++ program which prints three highest numbers from a list of numbers in descending order.
#include<iostream>
using namespace std;
int main(){
	int n=0;
	int size=0;
	int i=0;
	int j=0;
	int arr[1000];
	int output[1000];
	int o_idx=0;
	int max=-65535;
	int min=65535;
	
	cout<<"enter size of array ";
	cin>>size;
	cout<<"enter "<<size<<" elements\n";
	for(i=0;i<size;i++){
		arr[i]=0;
	}
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"the number array is : "<<endl;
for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j]<=arr[j+1]){
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
		}
		
	}

	cout<<"\nthree highest numbers from a list of numbers in descending order is :- \n";
	for(i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}
	
	
	
	return 0;
}
