/*Write a program to implement stack using student class. Student 
class conations property like id, name and marks. Following 
operation should be performed:
A. Insert Student (Push)
B. Remove Student (Pop)
C. Display
(Note: Program should be menu driven)*/
#include<iostream>
using namespace std;
#define size 2
class student 
{
    int id,mark;
    string name;
    public:
    student()
    {

    }
    void getdata()
    {
        cout<<"enter student id :- ";
        cin>>id;
        cout<<"enter student name :- ";
        cin>>name;
        cout<<"enter student mark :- ";
        cin>>mark;
    }
    void displaydata()
    {
        cout<<"id :-"<<id<<endl;
        cout<<"name :-"<<name<<endl;
        cout<<"mark :-"<<mark<<endl;
    }
};
class stu_stack
{
    student stack[size];
	int top;
public:
	stu_stack()
	{
		top=0;
	}

	void push(student item)
	{
		if(top>=size)
		{
			cout<<"Stack Oerflow"<<endl;
		}
		else
		{
			top=top+1;
			stack[top]=item;
		}
	} 
	student pop()
	{
		student item;
		if(top<=0)
		{
			cout<<"Stack Underflow"<<endl;
		}
		else
		{
			item=stack[top];
			top=top-1;
		}
		return item;
	}


	void peep()
	{
		int free;
		if(top>=size)
		{
			cout<<"Stack Oerflow"<<endl;
		}
		else if(top<=0)
		{
			cout<<"Stack Underflow"<<endl;
		}
		else
		{
			cout<<"stack pointer on"<<top<<endl;
			free=(size-top);
			cout<<"free space ="<<free<<endl;

		}
	}
	void display()
	{
		cout<<"students are:-"<<endl;
		for(int i=top;i>0;i--)
		{
			stack[i].displaydata();
		}
	}

};

int main()
{
    stu_stack s;
	student s1,s2;
	int ch,item;
	while(1)
	{
		cout << "Enter your choice :"<<endl;
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Peep" << endl;
		cout << "4. Display" << endl;
		cout << "5. Exit" << endl;
		cin >> ch;
		switch (ch)
		{
			case 1: 
				s1.getdata();
				s.push(s1);
				break;
			case 2:
				s2=s.pop();
				s2.displaydata();
				break;
			case 3:
				s.peep();
				break;
			case 4:
				s.display();
				break;
			case 5:
				return 0;
		}

	}

	return 0;
}

