/*Write a C++ program to which reads an given integer n and prints a twin prime which has the maximum size among twin primes less than or equals to n.
According to wikipedia "A twin prime is a prime number that is either 2 less or 2 more than another prime number" 
for example, either member of the twin prime pair (41, 43). In other words, a twin prime is a prime that has a prime gap of two
*/

#include<iostream>

using namespace std;

int isPrime(int n);

int main(){
	
	int n=0;
	int i=0;
	int j=0;
	int arr[1000];
	int idx=0;
	
	//accepting integer(range)
	cout<<"enter any integer ";
	cin>>n;
	
	//checking prime or not
	for(i=2;i<=n;i++){
		
		if(isPrime(i)==1){
			arr[idx++]=i;
			cout<<i<<" ";	
		}
		
	    
	}
	//printing twin primes
	cout<<"\ntwin primes are :- "<<endl;
	
	for(i=0;i<idx;i++){
		if((arr[i]+2)==(arr[i+1])){
		
		 cout<<arr[i]<<" ";
	 
		}
	}
	
	return 0;
}
//checking prime
int isPrime(int n){
	
	int i=0;
	int count=0;
	int flag=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			 count++;
		}
	}
	if(count==2){
		flag=1;
	}
	else{
		flag=0;
	}
	return flag;
}
