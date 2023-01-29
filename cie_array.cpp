/*Write a program to create an array which store data structure marks of 15 student. 
Store all the marks, which are having more than average marks into circular queue of 
size 5. If user find more average marks than circular queue size then data should be 
dequeue from circular queue and display it on console first and then remaining marks 
should be enqueue into the queue.*/
#include<iostream>
using namespace std;
#define length 5
#define stud 15
class queue
{
    int cq[length];
    int rear,front;
    public:
    queue()
    {
        rear=front=-1;
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
class student
{
    queue q;
    int m[stud] ,avg ,count,sum;
    public:
    student()
    {
        avg=sum=count=0;
    }
    void getmark()
    {
        //1cout<<"enter mark of 15 stud :-";
        for(int i=0;i<15;i++)
        {
            cout<<"Enter "<<i<< "stud mark :- ";
            cin>>m[i];
        }
    }
    void avgrage()
    {
        for(int i=0;i<15;i++)
        {
            sum=sum+m[i];
        }
        cout<<"sum ="<<sum<<endl;
        avg=sum/15;
        cout<<"avgrage =" <<avg<<endl;
    }
    void insert_cq()
    {
        for(int i=0;i<15;i++)
        {
            if(m[i]>avg)
            {
                q.enqueue(m[i]);
                count++;
            }
            q.display();
        }
    }
};
int main()
{
    student s;
    s.getmark();
    s.avgrage();
    s.insert_cq();
    return 0;
}