/*Write a program to insert string and convert it into upper
case and display it.*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char c[100];
	cout<<"\n enter string";
	cin>>c;
	for(int i=0;i<strlen(c);i++)
	{
		c[i]=c[i]-32;
		cout<<c[i];	
	}

	return 0;
}

/*enter string   
drashti
DRASHTI*/
