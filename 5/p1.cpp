/*Write a menu driven program to implement following 
functionality with queue using array:
A. Insert element (Enqueue)
B. Remove element (Dequeue)
C. Display the queue
*/
#include<iostream>
using namespace std;
#define length 3

class numberqueue
{
    int rear,front,queue[length];
    public:
        numberqueue()
        {
            rear=0;
            front=0;
        }
        void enqueue(int item)
        {
            if(rear==length)
            {
                cout<<"queue is full!!"<<endl;
            }
            else
            {
                if((front==0) && (rear==0))
                {
                    front=1;
                }
                rear=rear+1;
                queue[rear]=item;
            }
        }
        int dequeue()
        {
            int item;
            if(front==0)
            {
                cout<<"queue is empty"<<endl;
            }
            else
            {
                item=queue[front];
                if(front==rear)
                {
                    rear=0;
                    front=0;
                }
                else
                {
                    front=front+1;
                }
            }
            return item;
            
        }
        void display()
        {
            if(front==0)
            {
                cout<<"queue is empty"<<endl;
            }
            else
            {
                cout<<"----"<<endl;
                for(int i=front ; i<=rear;i++)
                {
                    cout<<"|"<<queue[i]<<"|"<<endl;
                    cout<<"----"<<endl;
                }
            }
        }
};
int main() 
{
    int rear,front,ch,item;
    numberqueue n;
    while(1)
    {
       
        cout<<"1.enqueue"<<endl;
        cout<<"2.dequeue"<<endl;
        cout<<"3.display"<<endl;
         cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: 
                cout<<"enter item"<<endl;
                cin>>item;
                n.enqueue(item);
                cout<<item<<" is inserted"<<endl;
                break;
            case 2:
                item=n.dequeue();
                cout<<item<<" is deleted"<<endl;
                break;
            case 3:
                n.display();
                break;
        }
    }
    return 0;
}
