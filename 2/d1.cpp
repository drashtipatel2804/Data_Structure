/*Write a program to take array of 16 elements. Insert only 
binary digits into an array and display its equivalent decimal 
number.
Example: Input: 0000000000010100
 Output: 20*/
 
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int a[16],decimal = 0,mul[16];
    cout<<"insert binary degit"<<endl;
    for(int i=0;i<16;i++)
    {
        cin>>a[i];
        if(a[i]!=0 && a[i]!=1)
        {
            cout<<"add only binary digit 0 and 1"<<endl;
            i--;
        }
    }
    for(int i=0;i<16;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=15,j=0;i>=0;i--,j++)
    {
        mul[j] = pow(2,i) * a[j];
        decimal += mul[j];
        //cout<<mul[j]<<" ";
    }
    cout<<"Decimal num is "<<decimal<<endl;
}

/*insert binary degit
0
0
0
0
0
0
0
0
0
0
0
1
0
1
0
0
0 0 0 0 0 0 0 0 0 0 0 1 0 1 0 0
Decimal num is 20*/
