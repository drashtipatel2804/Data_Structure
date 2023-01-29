 /*Write a program to find positions of inputted value from 
array.*/
#include<iostream>
using namespace std;
int main()
{
    int r,c, key,loc,loc1;
    int f=0;
    cout<<"enter hoe many row"<<endl;
    cin>>r;
    cout<<"enter column"<<endl;
    cin>>c;
    int a[r][c];
    cout<<"enter elements"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter key "<<endl;
    cin>>key;
    for(int i=0;(i<r) && (f==0);i++)
    {
        for(int j=0;(j<c) && (f==0);j++)
        {
            if(key==a[i][j])
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
        cout<<"key found loc is a["<<loc<<"]["<<loc1<<"]"<<endl;
    }
    else
    {
        cout<<"key is nt found"<<endl;
    }
    return 0;
}
/*enter hoe many row
2
enter column
2
enter elements
1
2
3
4
enter key 
2
key found loc is a[0][1]*/
