/*Write a program to input 2 matrices and display the addition
matrix of both*/
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"enter row\n";
	cin>>r;
	cout<<"enter column\n";
	cin>>c;
	int a[r][c] , b[r][c],add[r][c];
	cout<<"enter 1st matrix:"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter 2nd matrix:"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
		}
		cout<<endl;
	}
	cout<<"addition=\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<add[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/*enter row
2
enter column
2
enter 1st matrix:
1
2
3
4
enter 2nd matrix:
5
6
7
8


addition=
6 8 
10 12 */
