/*Write a program to insert string and display total number of
capital alphabet, small alphabet, digits and special symbol.*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int small=0 ,digit=0 , capital= 0,special=0;
	char c[100];
	cout<<"enter string"<<endl;
	cin.getline(c,100);
	for(int i=0;i<strlen(c);i++)
		{
			if(c[i]>='0' && c[i]<='9')
			{
				digit++;
			}
			else if(c[i]>='A' && c[i]<='Z')
			{
				capital++;
			}
			else if(c[i]>='a' && c[i]<='z')
			{
				small++;
			}
			else
			{
				special++;
			}
		}
		cout<<"\n capital ="<<capital;
		cout<<"\n small ="<<small;
		cout<<"\n digit ="<<digit;
		cout<<"\n special ="<<special;
}

/*enter string
drAshTi@007 p@teL

 capital =3
 small =8
 digit =3
 special =3*/