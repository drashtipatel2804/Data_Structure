//dynamic array
#include<iostream>
using namespace std;
class array
{
    int *a,count;
    public:

    array()
    {
        cout<<"how many values store in array...?"<<endl;
        cin>>count;
        a = new int [count];
    }

    void insert()
    {
        for(int i=0;i<count;i++)
        {
            cin>>a[i];
        }
    }
    void display()
    {
        for(int i=0;i<count;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    int ch;
    array ar;
    while(1)
    {
        cout<<"insertion"<<endl;
        cout<<"display"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                ar.insert();
                break;
            case 2:
                ar.display();
                break;
        }
    }
    return 0;
}