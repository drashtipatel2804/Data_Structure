/*Write a program to input string and check whether it is
palindrome or not*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char c[100] , ch[100];
	int f=0;
	cout<<" \nenter string";
	cin>>c; 
	for(int i=strlen(c)-1,j=0;i>=0 ;i--,j++)
	{
		ch[j]=c[i];
		//cout<<ch[i];
	}
	if(strcmp(c,ch))
		f=1;
	
	if(f==0)
		cout<<"STRING IS PALINDROM"; 
	else
		cout<<"NOT PALINDROM";
	return 0;
}

/*enter string
PEEP
STRING IS PALINDROM*/