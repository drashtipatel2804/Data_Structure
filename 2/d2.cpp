/*Write a program to insert string. Display each character in 
different lines. */
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cout<<"how many charecter in string"<<endl;
    cin>>n;
    char c[n];
    cout<<"enter string"<<endl;
    cin>>c;
    for(int i=0;i<strlen(c);i++)
    {
        cout<<"c["<<i<<"]="<<c[i]<<endl;
    }
    return 0;
}
/*how many charecter in string
100
enter string
drashtip
c[0]=d
c[1]=r
c[2]=a
c[3]=s
c[4]=h
c[5]=t
c[6]=i
c[7]=p*/
