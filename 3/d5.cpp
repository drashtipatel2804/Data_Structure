/*Write a program to input 3X3 matrix. Display it’s in proper 
matrix format.*/
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"enter num of row\n";
    cin>>r;
    cout<<"enter column\n";
    cin>>c;
    int a[r][c];
    cout<<"enter elements\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"elements are\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*enter num of row
3
enter column
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
elements are
1 2 3
4 5 6
7 8 9*/