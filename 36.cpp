//Write a C++ program to replace all the lower-case letters of a given string with the corresponding capital letters
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	
	char arr[1000];
	int i=0;
	int var=0;
	char output[1000];
	int o_idx=0;
	
	cout<<"enter any string in lowercase ";
	fgets(arr,1000,stdin);
	for(i=0;i<strlen(arr)-1;i++){
		if(arr[i]==' '){
			output[o_idx++]=' ';
			continue;
		}
		else{
		
		output[o_idx++]=(((int)arr[i])-32);
		}
	}
	
	output[o_idx]='\0';
	cout<<endl<<output;
	return 0;
}
