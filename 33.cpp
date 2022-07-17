//Write a C++ program to add all the numbers from 1 to a given number.

 #include<iostream>
 using namespace std;
 int main(){
 	int r=0;		
 	int sum=0;
	int i=0;

	cout<<"enter range ";
 	cin>>r;
 	
	for(i=1;i<=r;i++){
		sum=sum+i;
	}
	
	cout<<endl<<"sum is "<<sum<<endl;
	 
 	return 0;
 }
