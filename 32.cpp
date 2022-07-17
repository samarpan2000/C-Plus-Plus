 //Write a C++ program to compute the sum of the two given integers and count the number of digits of the sum value.
 
 #include<iostream>
 using namespace std;
 int main(){
 	int a=0;
 	int b=0;
 	int sum=0;
	int copy=0;
	int var=0;
	int count=0;
	cout<<"enter two numbers ";
 	cin>>a>>b;
 	
 	sum=a+b;
 	copy=sum;
 	while(copy!=0){
 		var=copy%10;
 		count++;
 		copy=copy/10;
	 }
	 cout<<endl<<"sum is "<<sum<<endl;
	 cout<<endl<<"number of digits of sum "<<count<<endl;
 	return 0;
 }
