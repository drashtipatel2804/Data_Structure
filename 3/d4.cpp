/*Write a program to insert string and display in following
pattern.
Input String is: HELLO
      H 
     H E 
    H E L 
   H E L L 
  H E L L O */
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char c[100];
	cout<<"enter string"<<endl;
	cin>>c;
	for(int i=0;i<strlen(c);i++)
	{
		for(int j=0;j<=strlen(c)-i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<c[j]<<" ";
		}
		cout<<endl;
	}
}

/*
enter string
HELLO
      H 
     H E 
    H E L 
   H E L L 
  H E L L O 
*/