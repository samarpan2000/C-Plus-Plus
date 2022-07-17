/* Write a program in C++ to show the manipulation of a string.

	-------------------------------------
1.The string:: welcome, w3resource
2.The length of the string:: 19
3.The char at index 1 of the string:: e
4.The char at index 1 of the string [using array ]:: e
5.Is the string empty:: 0
6.Retrieve the sub-string from 3rd position for 4 characters:: come
7.The sub-string replace by 'went':: welwent, w3resource
8.Append a string 'end' at last of the string:: welwent, w3resource end
9.Append a string 'end' at last of the string using operator:: welwent, w3resource end end
10.The string 'insert' inserting at 3rd position of the string:: wel inse rt went, w3resource end
11.The new string is:: wel insert went, w3resource end
12.Input a sentence:: The quick brown fox jumps over the lazy dog.
13.The quick brown fox jumps over the lazy dog.
*/

#include<iostream>
#include<string.h>

using namespace std;
int main() {

	char str[1000];
	char ch[100];
	char output[1000];
	char sub[100];
	int i=0,j=0;
	int sub_idx=0;
	int ch_idx=0;
	int o_idx=0;
	int sub_start=0,sub_stop=0;
	int count=0;
	int flag=0;


	cout<<"enter any string ";
	fgets(str,1000,stdin);

	cout<<"the character at index 1 is "<<str[1]<<endl;
	cout<<"the length of the string is "<<strlen(str)-1<<endl;

	for(i=0; i<strlen(str)-1; i++) {
		if(str[i]!='\0') {
			count++;
		}

	}

	if(count>=1) {
		cout<<"string is not empty "<<endl;
	} else if(count==0) {
		cout<<"string is empty "<<endl;
	}

	cout<<"enter the starting position of extracting substring ";
	cin>>sub_start;
	cout<<"enter the ending position of extracting substring ";
	cin>>sub_stop;

	for(i=sub_start; i<=sub_stop; i++) {
		cout<<str[i];

	}

	cout<<endl<<"enter the substring to be inserted ";
	cin>>ch;

	cout<<"enter the starting position of substring ";
	cin>>sub_start;
	cout<<"enter the ending position of substring ";
	cin>>sub_stop;

	for(i=sub_start; i<=sub_stop; i++) {
		str[i]=ch[ch_idx++];
	}
	sub[i]='\0';
	cout<<str<<endl;

	//cout<<"enter the substring to be inserted at the end ";
	//cin>>sub;

	//str.append(sub);
	//cout<<str<<endl;
	//str.append("end");
	//	cout<<str<<endl;
	
	//cout<<"enter any sentence ";
	//fgets(output,1000,stdin);

	//cout<<output<<endl;

	return 0;
}
