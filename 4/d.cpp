//stack operation
#include<iostream>
using namespace std;
#define size 5

class Number
{
	int top,stack[size];
public:
	
	Number()
	{
		top=0;
	}

	void push(int item)
	{
		if(top>=size)
		{
			cout<<"Stack overflow"<<endl;
		}
		else
		{
			top++;
			stack[top]=item;
		}
	} 

	int pop()
	{
		int item;
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
		if(top>size)
		{
			cout<<"Stack overflow"<<endl;
		}
		else if(top<=0)
		{
			cout<<"Stack Underflow"<<endl;
		}
		else
		{
			cout<<"stack pointer on   "<<top<<endl;
		}
	}
	void display()
	{
		cout<<"----"<<endl;
		for(int i=top;i>0;i--)
			{
				
				cout<<"|"<<stack[i]<<"|"<<endl;
				cout<<"----"<<endl;
			}

	}

};
int main()
{
	int item,top,ch;
	Number s;
	while(1)
	{
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Peep" << endl;
		cout << "4. Display" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter your choice :";
		cin >> ch;

		switch(ch)
		{
			case 1:
				cin>>item;
				s.push(item);
				cout<<item<<"   =  "<<"insrted"<<endl;
				break;
				
			case 2:
				item=s.pop();
				cout<<item<<"  =  "<<"deleted"<<endl;
				s.display();
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
