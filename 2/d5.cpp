/*Write a program to insert string and print in reverse order*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c[100];
    cout<<"\n enter string";
    cin>>c;
    for(int i=strlen(c)-1;c[i]>=0;i--)
    {
        cout<<c[i];
    }
    return 0;
}
/*
enter string drashti
ithsardv%
*/