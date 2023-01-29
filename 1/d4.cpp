/*Write a program to insert five different subjects’ marks of
student and display result with total, percentage and class
[Distinction, first class, second class, pass class, fail].*/
#include<iostream>
using namespace std;
int main()
{
	int s[5],total;
	float per;
	string dis;
	cout<<"enter marks of 5 sub"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<5;i++)
	{
		total=total+s[i];
	}
	per=(total*100)/500;
	if(per>=80 && per<100)
	{
		dis="first class";
	}
	else if(per>=70 && per<60)
	{
		dis="second class";
	}
	else if(per>=60 && per<50)
	{
		dis="pass class";
	}
	else
	{
		dis="fail";
	}
	cout<<"total="<<total<<endl;
	cout<<"per="<<per<<endl;
	cout<<"distiction="<<dis<<endl;
	return 0;

}

/*enter marks of 5 sub
85
95
85
95
95
distiction=first class
total=456
per=91
*/
