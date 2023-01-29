/*Write a program to take array of ten elements. Insert values
into all elements in array. Display sum and average of array
elements.*/

#include<iostream>
using namespace std;
int main()
{
	int a[10] , sum ;
	float avg;
	cout<<"enter 10 element"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/10;
	cout<<"sum="<<sum<<endl;
	cout<<"avg="<<avg<<endl;
	return 0;
}

/*enter 10 element
1
2
3
4
5
6
7
8
9
10
sum=57
avg=5
*/
