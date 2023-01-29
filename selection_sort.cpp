//selection sort
#include<iostream>
using namespace  std;
#define n 5
int main()
{
    int a[n] ,min ,i,j,temp;
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

    //selection
    for(i=0; i < n-1; i++ )
    {
        min = i;   //setting min as i
        for(j=1; j < n; j++)
        {
            if(a[j] < a[min])   //if element at j is less than element at min position
            {
                min = j;    //then set min as j
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    cout<<"selection sort"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}