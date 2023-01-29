/*Write a program to input 3X3 matrix. Display diagonal 
elements of matrix and sum of its values*/
#include<iostream>
using namespace std;
int main()
{
    int r,c,sum=0;
    while(1)
    {
	    cout<<"enter num of row\n";
	    cin>>r;
	    cout<<"enter column\n";
	    cin>>c;
	    if(r==c)
	    	break;
	    else
	    	cout<<"diagonal matrix not possible"<<endl;
	}
    int a[r][c];
    cout<<"enter elements\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"diagonal elements are\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if((i==j) || (i==0||j==0) && (i==c-1 || j==c-1))
            {
                cout<<a[i][j]<<" ";
                sum=sum+a[i][j];
            }
        }
        cout<<endl;
    }
    cout<<"sum of diagonal elements is:\n"<<sum<<endl;
}
/*enter num of row
2
enter column
3
diagonal matrix not possible
enter num of row
2
enter column
2
enter elements
1
2
3
5
diagonal elements are
1 2
3 5
sum of diagonal elements is:
11*/
