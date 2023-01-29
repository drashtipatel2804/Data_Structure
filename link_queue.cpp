//linked queue
#include<iostream>
using namespace std;
class node
{
	public:	
		int data;
		node *front;
		node *rear;
		node *next;
};
class linkqueue
{
	public:
		node *temp , *newnode , prev;
		node *head=NULL;
	void enqueue(int data)
	{
		temp=head;
		if(head==NULL)
		{
			newnode=new node();
			newnode->data=data;
			head=newnode;
		}
		else
		{
			while(temp->next != NULL)
			{
				temp=temp->next;
			}
			newnode= new node();
			newnode->data=data;
			temp->next=newnode;
		}
	}
	void dequeue()
	{
		temp=head;
		if(head==NULL)
		{
			cout<<"linked queue is empty"<<endl;
		}
		else
		{
			head=head->next;
			delete temp;
		}
	}
	void display()
	{
		temp=head;
		if(head==NULL)
		{
			cout<<"queue is empty"<<endl;
		}
		else
		{
			while(temp->next!=NULL)
			{
				cout<<temp->data<<endl;
				temp=temp->next;
			}
			cout<<temp->data<<endl;
		}
	}
};
int main()
{
	linkqueue l;
	int data, ch;
	while(1)
	{
		cout<<"1.enqueue"<<endl;
		cout<<"2.dequeue"<<endl;
		cout<<"3.display"<<endl;
		cout<<"enter ur choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"enter data"<<endl;
				cin>>data;
				l.enqueue(data);
				cout<<"inserted"<<endl;
				break;
			case 2:
				l.dequeue();
				cout<<"deleted"<<endl;
				break;
			case 3:
				l.display();
				break;
		}
	}
	return 0;
}
