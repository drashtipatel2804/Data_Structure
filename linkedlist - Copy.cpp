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
    node *temp, *prev, *newnode, *ptr;

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
            int count;
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

            if(pos<=count && pos > 0)
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
            } else {
            	cout << "Invalid postion";
			}
        }
        void deleteatfirst()
        {
            if(head == NULL)
            {
                cout << "There is no element in  linklist" << endl;
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
                cout << "There is no element in linklist" << endl;
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
            int count;
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
            while(temp -> next != NULL)
            {
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << temp -> data << endl;
        }
        void sorting()
        {
            temp = head; 
            while(temp != NULL)
            {
                if(prev -> data > temp -> data)
                {
                    ptr = temp;
                    temp = prev;
                    prev = ptr; 
                }
                prev = temp;
                temp = temp -> next;
            }
        }
        void searching(int key)
        {
            int found = 0;
            temp = head;
            while(temp != NULL)
            {
                if(temp->data == key)
                {
                    found = 1;
                }
                else
                {
                    temp = temp -> next;
                }
            }
            if(found == 1)
            {
                cout << "ELEMENT FOUND" << endl;
            }
            else
            {
                cout << "ELEMENT NOT FOUND" << endl;
            }
        }
};

int main()
{
    Linklist obj;
    int ch, data;
    
    do
    {
        cout << "Press 1 to INSERT AT FIRST" << endl;
        cout << "Press 2 to INSERT AT LAST" << endl;
        cout << "Press 3 to INSERT AT USER CHOICE" << endl;
        cout << "Press 4 to DELETE AT FIRST" << endl;
        cout << "Press 5 to DELETE AT LAST" << endl;
        cout << "Press 6 to DELETE AT USER CHOICE" << endl;
        cout << "press 7 to DISPLAY" << endl;
        cout << "Press 8 to SORT DATA" << endl;
        cout << "Press 9 to SEARCH" << endl;
        cout << "Press 0 to EXIT" << endl;

        cout << "Enter your choice = ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                cout << "Enter your value = ";
                cin >> data;

                obj.insertatfirst(data);
                break;
            case 2:
                cout << "Enter your value = ";
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
            case 8:
                obj.sorting();
                break;
            case 9:
                cout << "Enter element to seaarch = ";
                cin >> data;
                obj.searching(data);
                break;
        };
    } while (ch!=0);
    
}
