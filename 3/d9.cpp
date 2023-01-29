/*Write a program to input 2 matrices and display the
multiplication matrix of both*/
#include<iostream>
using namespace std;
int main()
{
	int r,c,p,j,k;
	cout<<" Enter the number of printing the rows=";
	cin>>r;
	cout<<"Enter the number of printing the column=";
	cin>>c;
	cout<<"Enter the first matrix of element=\n";
	int a[r][c],b[r][c],mul[r][c];
	for(p=0;p<r;p++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[p][j];
		}
	}
	cout<<"Enter the second matrix of element=\n";
	for(p=0;p<r;p++)
	{
		for(j=0;j<c;j++)
		{
			cin>>b[p][j];
		}
	}
	cout<<"multiply of the matrix=\n";
	for(p=0;p<r;p++)
	{
		for(j=0;j<c;j++)
		{
			mul[p][j]=0;
			for(k=0;k<c;k++)
			{
				mul[p][j]+=a[p][k]*b[k][j];
			}
		}
	}
	for(p=0;p<r;p++)
	{
		for(j=0;j<c;j++)
		{
			cout<<mul[p][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

/* Enter the number of printing the rows=2
Enter the number of printing the column=2
Enter the first matrix of element=
1
2
3
4
Enter the second matrix of element=
1
2
3
4
multiply of the matrix=
7 10 
15 22 
*/

