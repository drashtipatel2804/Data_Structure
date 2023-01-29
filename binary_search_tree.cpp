//binary search tree
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
    
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

node* insert(node* root,int val)
{
    if(root==NULL)
    {
        root = new node(val);
        return root ;
    }
    else if(val < root->data)
    {
        root->left=insert(root->left,val);
    }
    else
    {
        root->right=insert(root->right,val);
    }
    return root;
}
void takeip(node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insert(root,data);
        cin>>data;
    }
}
 void preorder(node *ptr)
{
    if(ptr !=NULL)
    {
        cout<<ptr->data<<endl;
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
int main()
{
    node *root=NULL;
    node *ptr;
    int ch;
    while(1)
    {
        cout<<"1.insert"<<endl;
        cout<<"2.delete"<<endl;
        cout<<"3.search"<<endl;
        cout<<"4.display"<<endl;
        cout<<"enter your coice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"enter data to crate bst"<<endl;
                takeip(root);
                break;
            case 4:
                cout<<"printing"<<endl;
                preorder(ptr);
                break;

        }
    }
    
    return 0;
}