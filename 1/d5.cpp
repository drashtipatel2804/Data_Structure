/*Write a program to input element at the position of user’s
choice*/
#include<iostream>
using namespace std;
int main()
{
	int cr,cc,r,c,element , i , j;
	char choice;
	cout<<"enter num of row "<<endl;
	cin>>r;
	cout<<"enter num of column"<<endl;
	cin>>c;
	int a[r][c];
	cout<<"enter position of row and column where u want to put element"<<endl;
	do
	{
		cout<<"enter row"<<endl;
		cin>>cr;
		cout<<"enter coloum"<<endl;
		cin>>cc;
		if(cr>=r || cc>=c)
		{
			cout<<"eror enter again"<<endl;
			if (cr>=r && cc>=c)
			{
				cout<<"again enter row"<<endl;
				cin>>cr;
				cout<<"again enter column"<<endl;
				cin>>cc;
			}
			else if (cr>=r)
			{
				cout<<"again enter row"<<endl;
				cin>>cr;
			}
			else
			{
				cout<<"again enter column"<<endl;
				cin>>cc;
			}
		}
		cout<<"enter element "<<endl;
		cin>>element;
		a[cr][cc]=element;
		cout<<"enter y if u want to put more element"<<endl;
		cin>>choice;
	}while(choice=='y'||choice=='Y');
	for(i=0;i<r;i++)
	{
		for( j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
/*enter num of row
2
enter num of column
2
enter position of row and column where u want to put element
enter row
0
enter coloum
0
enter element
5
enter y if u want to put more element
y
enter row
0
enter coloum
1
enter element
3
enter y if u want to put more element
y
enter row
1
enter coloum
0
enter element
8
enter y if u want to put more element
y
enter row
1
enter coloum
1
enter element
6
enter y if u want to put more element
n
5 3
8 6*/
