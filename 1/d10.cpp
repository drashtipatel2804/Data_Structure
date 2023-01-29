/*Write a program to input old value and new value. Find old 
value from array and replace with new value*/
#include<iostream>
using namespace std;
int main()
{
    int r,c,nv,ov,f=0,loc,loc1;
    cout<<"enter roe and colum"<<endl;
    cin>>r>>c;
    int a[r][c];
    cout<<"enter elements"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter old values "<<endl;
    cin>>ov;
    for(int i=0;(i<r) && (f==0);i++)
    {
        for(int j=0;(j<c) && (f==0);j++)
        {
            if(ov==a[i][j])
            {
                f=1;
                loc=i;
                loc1=j;
            }
            else
            {
                f=0;
            }
        }
    }
    if(f==1)
    {
        cout<<"old value found "<<endl;
        cout<<"enter new values"<<endl;
        cin>>nv;
        cout<<"before upate="<<a[loc][loc1]<<endl;
        a[loc][loc1]=nv;
        cout<<"after upate="<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    else
    {
        cout<<"old vale is nt found"<<endl;
    }
}
/*enter roe and colum
 
3
3
enter elements
1
2
3
4
5
6
7
8
9
enter old values 
5
old value found 
enter new values
50
before upate=5
after upate=
1 2 3
4 50 6
7 8 9*/