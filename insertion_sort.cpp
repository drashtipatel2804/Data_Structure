//insertion sort
#include<iostream>
using namespace  std;
#define n 5
int main()
{
    int a[n] ,key ,i,j;
    cout<<"enter element"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }


    cout<<"unsorted form"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //insertion sort
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && key<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    cout<<"insertion sort"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}