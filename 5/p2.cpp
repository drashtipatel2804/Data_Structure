//circular queue

#include<iostream>
using namespace std;
#define length 5

class number
{
	int front,rear,cq[length];
	public:
		number()
		{
			front=rear=-1;
		}
		void enqueue(int item)
		{
			if((front==0 && rear==length-1) || (rear==(front-1)))
			{
				cout<<"queue is full..!!"<<endl; 
			}
			else if(front==-1)
			{
				front=rear=1;
				cq[rear]=item;
				
			}
			else if((rear== length-1) && (front!=0))
			{
				rear=0;
				cq[rear]=item;
				
				
			}
			else
			{
				rear++;
				cq[rear]=item;
			}
		}
		int dequeue()
		{
			int item;
			if(front==-1)
			{
				cout<<"queue is empty !!";
			}
			item=cq[front];	
			cq[front]=0;
			if(front==rear)
			{
				front==rear==-1;
			}
			else if(front==length-1)
			{
				front=0;
			}
			else
			{
				front++;
			}
			return item;
		}
		void display()
		{
			int i;
			if(front==-1)
			{
				cout<<"queue is empty..!!"<<endl;
			}
			i=front;
			if(front<=rear)
			{
				while(i<=rear)
				{
					cout<<cq[i++]<<endl;
				}
			}
			else
			{
				while(i<=length-1)
				{
					cout<<cq[i++]<<endl;
				}
				i=0;
				 while(i<=rear)
				 {
					cout<<cq[i++]<<endl;
				 }
           			
			}

		}
	
};
int main()
{
	number n;
	int rear,front,item,ch;
	while(1)
	{
		cout<<"1.enqueue :- "<<endl;
		cout<<"2.dequeue :- "<<endl;
		cout<<"3.display :- "<<endl;
		cout<<"enter your choice :- "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"enter item :- ";
				cin>>item;
				n.enqueue(item);
				break;
			case 2:
				item=n.dequeue();
				cout<<item<<" is deleted :- "<<endl;
				break;
			case 3:
				n.display();
				break;
		}
	}
	return 0;
}
