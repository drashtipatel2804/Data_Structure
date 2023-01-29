 /* Write a program to input n elements into array and display it.
n must be any positive number.*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"how ,any element in arra"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			cout<<"ERROR: ENTER AGAIN"<<endl;
			i--;
		}
	}
	cout<<"positive elements are"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
/*how ,any element in arra
3
enter elements
2
-2
ERROR: ENTER AGAIN
2

2
positive elements are
2
2
2
*/
