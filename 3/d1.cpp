/*Write a program to input string and count the occurrence of
each character in it.*/
#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char s[100];
	int count=0;
	cout<<"enter string"<<endl;
	cin.getline(s,100);
	for(int i=0;i<strlen(s);i++)
	{
		count=0;
		for(int j=0;j<strlen(s);j++)
		{
			if(s[i]==s[j])
			{
				count++;
			}
			
		}
	cout<<s[i]<<" used "<<count<<" times"<<endl;
		
	}

}

/*enter string
hello
h used 1times
e used 1times
l used 2times
l used 2times
o used 1times
*/