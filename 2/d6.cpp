/*Write a program to insert string and character. Display index 
of the first occurrence of the character in string*/

#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    int i,found=0,loc;
    char c[100];
    char s;
    cout<<"\nenter string:";
    cin>>c;
    cout<<"\nenter name u wannt to know index";
    cin>>s;
    for(int i=0;i<strlen(c);i++)
    {
        if(s==c[i])
        {
            found=1;
            loc=i;
        }
        else
        {
            found=0;
        }
    }
    if(found==0)
    {
        cout<<"not find";
    }
    else
    {
        cout<<"find nd position is c["<<loc<<"]="<<c[loc];
    }
}

/*enter string:
drashti

enter name u wannt to know index
i
find nd position is c[6]=i*/
