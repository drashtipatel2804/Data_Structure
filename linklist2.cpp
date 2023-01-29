#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;

        node()
        {
            data = 0;
            next = NULL;
        }
};

class Linklist
{
    node *head = NULL;
    node *temp, *prev, *newnode;

    public:
        void insertatfirst(int data)
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
        void insertatlast(int data)
        {
            if(head == NULL)
            {
                newnode = new node();
                newnode -> data = data;

                head = newnode;
            }
            else
            {
                temp = head;
                while(temp -> next != NULL)
                {
                    temp = temp -> next;
                }

                newnode = new node();
                newnode -> data = data;

                temp -> next = newnode;
            }
        }
        void insertatuserchoice()
        {
            int count = 0;
            int data;
            int pos;

            temp = head;
            while(temp -> next != NULL)
            {
                count++;
                temp = temp -> next;
            }
            count++;
            cout << "Count = " << count << endl;

            cout << "Enter position = ";
            cin >> pos;

            if(count >= pos && pos > 0)
            {
                if(pos == 1)
                {
                    cout << "Enter your data = ";
                    cin >> data;
                    insertatfirst(data);
                }
                else if(pos == count)
                {
                    cout << "Enter your data = ";
                    cin >> data;
                    insertatlast(data);
                }
                else
                {
                    temp = head;
                    for(int i=1 ; i<pos ; i++)
                    {
                        prev = temp;
                        temp = temp -> next;
                    }
                    newnode = new node();
                    
                    cout << "Enter your data = ";
                    cin >> newnode -> data;

                    newnode -> next = temp;
                    prev -> next = newnode;
                }
            }
        }
        void deleteatfirst()
        {
            if(head == NULL)
            {
                cout << "Linklist is empty" << endl;
            }
            else
            {
                temp = head;
                head = head -> next;
                delete temp;
            }
        }
        void deleteatlast()
        {
            if(head == NULL)
            {
                cout << "Linklist is empty" << endl;
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
        void deleteatuserchoice()
        {
            int count = 0;
            int pos;

            temp = head;
            while(temp -> next != NULL)
            {
                count++;
                temp = temp -> next;
            }
            count++;

            cout << "Count = " << count << endl;

            cout << "Pos = ";
            cin >> pos;

            if(pos >= count && pos > 0)
            {
                if(pos == 1)
                {
                    deleteatfirst();
                }
                else if(pos == count)
                {
                    deleteatlast();
                }
                else
                {
                    temp = head;
                    for(int i=1 ; i<pos ; i++)
                    {
                        prev = temp;
                        temp = temp -> next;
                    }
                    prev -> next = temp -> next;
                    delete temp;
                }
            }
        }
        void display()
        {
            temp = head;
            while(temp != NULL)
            {
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << endl;
        }
};

int main()
{
    int ch;
    int data;
    Linklist obj;

    do
    {
        cout << "Press 1 to insert at first" << endl;
        cout << "Press 2 to insert at last" << endl;
        cout << "Press 3 to insert at user choice" << endl;
        cout << "Press 4 to delete at first" << endl;
        cout << "Press 5 to delete at last" << endl;
        cout << "Press 6 to delete at user choice" << endl;
        cout << "Press 7 to display" << endl;
        cout << "Press 8 to exit" << endl;

        cout << "Enter your choice = ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                cout << "Enter data = ";
                cin >> data;
                obj.insertatfirst(data);
                break;
            case 2:
                cout << "Enter data = ";
                cin >> data;
                obj.insertatlast(data);
                break;
            case 3:
                obj.insertatuserchoice();
                break;
            case 4:
                obj.deleteatfirst();
                break;
            case 5:
                obj.deleteatlast();
                break;
            case 6:
                obj.deleteatuserchoice();
                break;
            case 7:
                obj.display();
                break;
        }
    }while(ch!=8);

    return 0;
}