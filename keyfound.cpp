/*Write a program to input element at the position of user’s
choice*/
#include<iostream>
using namespace std;
int main()
{
	int n , key,i,f=0 , loc;
	cout<<"how many element in array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element which u want to know position"<<endl;
	cin>>key;
	while((i<n) && (f==0))
	{
		if(key==a[i])
		{
			f=1;
			loc=i;
		}
		else
		{
			i=i+1;
		}
	}
	if(f==0)
	{
		cout<<"key is not found"<<endl;
	}
	else
	{
		cout<<"found and loc is a["<<i<<"]="<<a[i]<<endl;
	}
	return 0;
	
}
/*how many element in array
3
enter elements
1
2
3
enter element which u want to know position
3
found and loc is a[2]=3*/
