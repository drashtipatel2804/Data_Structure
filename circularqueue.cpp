#include<iostream>
#define size 5
using namespace std;

class queue_int
{
    int cqueue[size];
    int front;
    int rear;
    int next;

    public:
        queue_int()
        {
            front = -1;
            rear = -1;
            next = 0;
        }
        void enqueue(int data)
        {
            if(front == -1)
            {
                front = 0;
                rear = 0;
                cqueue[front] = data;
            }
            else
            {
                if(rear == (size-1))
                {
                    next = (rear % (size-1));
                }
                else
                {
                    next = (rear % (size-1))+1;
                }
                if(next!=front)
                {
                    rear = next;
                    cqueue[rear] = data;
                }
                else
                {
                    cout << "Queue is full" << endl;
                }
            }
        }
        int dequeue()
        {
            int temp;
            if(front == -1)
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                temp = cqueue[front];
                if(front == rear)
                {
                    front = -1;
                    rear = -1;
                }
                else
                {
                    front = (front %(size-1));
                }

                return temp;
            }
        }
        void display()
        {
            if(front == -1)
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                next = front;
                while(next != rear)
                {
                    cout << cqueue[next] << " ";
                    if(next == (size-1))
                    {
                        next = (next % (size-1));
                    }
                    else
                    {
                        next = (next % (size-1))+1;
                    }
                }
            }
        }
};

int main()
{
    queue_int obj;
    int ch;
    int item;

    do
    {
        cout << "Press 1 to enter element" << endl;
        cout << "Press 2 to delete element" << endl;
        cout << "Press 3 to display element" << endl;
        cout << "Press 4 to exit" << endl;

        cout << "Enter your choice = ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                cout << "Enter your data = ";
                cin >> item;

                obj.enqueue(item);
                break;
            case 2:
                obj.dequeue();
                break;
            case 3:
                obj.display();
                break;
        }
    } while (ch!=4);

    return 0;
    
}