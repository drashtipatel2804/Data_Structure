/*Write a program to insert string and display the length of 
string*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c[50];
    int slength;
    cout<<"\nenter string";
    cin>>c;
    slength=strlen(c);
    cout<<slength<<endl;
}
/*enter string
drashti
7*/