/*Write a program to input 3X3 matrix. Display transpose of a
matrix*/
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"enter row\n";
	cin>>r;
	cout<<"enter column\n";
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
	cout<<"elements are:\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"transpose of matrix\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
	
}

/*
enter row
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
elements are:
1 2 3 
4 5 6 
7 8 9 
transpose of matrix
1 4 7 
2 5 8 
3 6 9 
*/
