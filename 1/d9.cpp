/*Write a program to delete an element of array at position of 
user choice*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int arr[n], tot=n, i, elem, j, found=0;
    cout<<"Enter Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    cout<<"after delete"<<endl;
    for(i=0;i<tot;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
/*enter size
5
Enter 10 Array Elements: 
1
2
3
4
5

Enter Element to Delete: 3

Element Deleted Successfully!
after delete
1
2
4
5*/
