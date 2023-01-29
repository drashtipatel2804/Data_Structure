//bubble sort , insertion sort , selection sort
#include<iostream>
using namespace std;
#define n 5
int main()
{

    int a[5]={ 24,6,45,76,9};
    int temp , i , j;

    cout<<"unsorted form"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //bubble

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"bubble sort"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}