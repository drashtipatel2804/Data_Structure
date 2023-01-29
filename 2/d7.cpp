/*Write a program to insert string and character. Display index
of the first occurrence of the character in string*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char c[100], ch;
	int found=0 , loc ;
	cout<<"enter string"<<endl;
	cin>>c;
	cout<<"enter charecter u want to know index"<<endl;
	cin>>ch;
	for(int i=0; i<strlen(c) && found==0;i++)
	{
		if(ch==c[i])
		{
			found=1;
			loc=i;
		}
		else
		{
			found=0;
		}
	}
	if(found==0)
	{
		cout<<"charecter not found";
	}
	else
	{
		cout<<"charecter found and loc is c["<<loc<<"]="<<c[loc]<<endl;
	}
	return 0;
}

/*enter string
drashti
enter charecter u want to know index
h
charecter found and loc is c[4]=h
*/
