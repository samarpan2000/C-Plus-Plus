//Write a program in C++ to add two binary numbers

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a=0;
	int b=0;
	int sum1=0;
	int sum2=0;
	int sum=0;
	int rem1=0;
	int rem2=0;
	int rem=0;

	int arr1[100];
	
	int copy1=0;
	int copy2=0;
	int i=0;
	int j=0;
	
	cout<<"enter first binary numbers ";
	cin>>a;
	cout<<"enter second binary numbers ";
	cin>>b;
	copy1=a;
	copy2=b;
	while(1){
		rem1=copy1%10;
		sum1=sum1+rem1*(pow(2,i));
		copy1=copy1/10;
		i++;
		if(copy1==0){
			break;
		}
	}
	i=0;
	while(1){
		rem2=copy2%10;
		sum2=sum2+rem2*(pow(2,i));
		copy2=copy2/10;
		i++;
		if(copy2==0){
			break;
		}
	}
	sum=sum1+sum2;
	i=0;
	while(1){
		rem=sum%2;
        arr1[i]=rem;
        i++;
	}
	cout<<"addition of two binary numbers is :- "<<endl;
	for(j=i;j>=0;j--){
		cout<<arr1[j];
	}
	
	
	return 0;
}
