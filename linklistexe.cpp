#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;

        node()
        {
            data = 0;
            next = NULL;
        }
};

class linklist
{
    public:
        node *head = NULL;
        node *newnode, *temp, *prev;

        void insert(int data)
        {
            if(head == NULL)
            {
                newnode = new node();
                newnode -> data = data;
                head = newnode;
            }
            else
            {
                newnode = new node();
                newnode -> data = data;
                newnode -> next = head;
                head = newnode;
            }
        }
        void deletenode()
        {
            if(head == NULL)
            {
                cout << "LINKLIST IS EMPTY" << endl;
            }
            else
            {
                temp = head;
                while(temp -> next != NULL)
                {
                    prev = temp;
                    temp = temp -> next;
                }
                prev -> next = NULL;
                delete temp;
            }
        }
        void max()
        {
            int max = head -> data;
            if(head == NULL)
            {
                cout << "LINKLIST IS EMPTY" << endl;
            }
            else
            {
                temp = head;
                while(temp -> next != NULL)
                {
                    if(temp -> data > max)
                    {
                        max = temp -> data;
                    }
                    else
                    {
                        temp = temp -> next;
                    }
                }
                cout << "MAXIMUM = " << max << endl;
            }
        }
        void min()
        {
            int min = head -> data;
            if(head == NULL)
            {
                cout << "LINKLIST IS EMPTY" << endl;
            }
            else
            {
                temp = head;
                while(temp -> next != NULL)
                {
                    if(temp -> data < min)
                    {
                        min = temp -> data;
                    }
                    else
                    {
                        temp = temp -> next;
                    }
                }
                cout << "MINIMUM = " << min << endl;
            }
        }
        void display()
        {
            temp = head;
            while(temp -> next != NULL)
            {
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << temp -> data << endl;
        }
};

int main()
{
    linklist obj;
    int ch, data;

    do
    {
        cout << "Press 0 to EXIT" << endl;
        cout << "Press 1 to insert" << endl;
        cout << "Press 2 to delete" << endl;
        cout << "Press 3 to find max" << endl;
        cout << "Press 4 to fin min" << endl;
        cout << "Press 5 to display" << endl;

        cout << "Enter choice = ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                cout << "Enter data = ";
                cin >> data;
                obj.insert(data);
                break;
            case 2:
                obj.deletenode();
                break;
            case 3:
                obj.max();
                break;
            case 4:
                obj.min();
                break;
            case 5:
                obj.display();
                break;
        }
    } while (ch!=0); 
    
}