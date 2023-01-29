#include<iostream>
using namespace std;
int main()
{
     int N;
    int size,count=0,counts=0;
    cout<<"enter how many element of array"<<endl;
    cin>>N;
    int n[5];
    for(int i = 0 ; i < N ; i++)
    {
        cout<<"Enter element =  "<<endl;
        cin>>n[i];
    }
    for(int i=0;i<N;i++)
    {
        if(n[i]%2==0)
        {
            count++;
            cout<<"element "<<i+1<<" is "<<" = "<<n[i]<<endl;   
        }
        else
        {
            cout<<"element "<<i+1<<" is "<<" = "<<n[i]<<endl;   
            counts++;
        }
    }
    cout<<"number of even number is : "<<count<<endl;
    cout<<"number of odd number is : "<<counts;
    return 0;

}
