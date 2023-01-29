//Write a program to insert five elements into array and display it
#include<iostream>
using namespace std;
int main()
{
	int n[5];
	cout<<"enter 5 elements"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>n[i];
	}
	cout<<"elements are:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"n["<<i<<"]="<<n[i]<<endl;
	}
	return 0;
}

/*enter 5 elements
10
20
30
40
50
elements are:
n[0]=10
n[1]=20
n[2]=30
n[3]=40
n[4]=50
*/

