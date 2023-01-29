#include<iostream>
using namespace std;
class tree
{
	public:
		int data;
		tree *left;
		tree *right;
}*root,*node;

void preorder(tree *root)
{
	if(root == NULL)
	{ 
		return;
	}
	else
	{
		cout << root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(tree *root)
{
	if(root == NULL)
	{ 
		return;
	}
	else
	{
		inorder(root->left);
		cout << root->data<<" ";
		inorder(root->right);
	}
}

void postorder(tree *root)
{
	if(root == NULL)
	{ 
		return;
	}
	else
	{
		postorder(root->left);
		postorder(root->right);
		cout << root->data<<" ";
	}
}

void Add_Node(int value,tree *root)
{
	node = root;
	if(value > node->data) 
    {
		if(node->right == NULL)
		{
			node->right = new tree;
			node = node->right;
			node->data = value;
			cout<<"\n\nRoot Added Successfully In Binary Tree.\nPress 3 To Check The Added Node.";
		}
		else
		{
			Add_Node(value,root->right);
		}		
    }
	else if(value < node->data)
	{
		if(node->left == NULL)
		{
			node->left = new tree;
			node = node->left;
			node->data = value;
			cout<<"\n\nRoot Added Successfully In Binary Tree.\nPress 3 To Check The Added Node.";
		}
		else
		{
			Add_Node(value,root->left);
		}		
	}
	else
	{
			cout<<"\nYou Can't Add This Node Because This Node Has Same Data As Node!!!";
			return;
	}
}	
tree* findmin(tree *root)
{
		if(root==NULL)
		{
			return NULL;
		}
		else if(root->left==NULL)
		{
			return root;
		}
		else
		{
			return findmin(root->left);
		}
}
tree* findmax(tree *root)
{
	if(root==NULL)
	{
		return NULL;
	}
	else if(root->right==NULL)
	{
		return root;
	}
	else
	{
		return findmax(root->right);
	}
}
tree* remove(int value, tree* root ) {
	tree *temp;
    if(root == NULL)
        return NULL;
    else if(value < root->data)
        root->left = remove(value, root->left);
    else if(value > root->data)
        root->right = remove(value, root->right);
    else if(root->left && root->right)
    {
        temp = findmin(root->right);
        root->data = temp->data;
        root->right = remove(root->data, root->right);
    }
    else
    {
        temp = root;
        if(root->left == NULL)
            root = root->right;
        else if(root->right == NULL)
            root = root->left;
        delete temp;
    }

    return root;
}


int main()
{
	int ch,ch2,i=0,d;

	while(ch!=4)
	{

		cout<<"\n\t\t\t---------------  Binary Tree  --------------";
		cout<<"\n\t\t\t-                                          -";
		cout<<"\n\t\t\t-      You Have Four Options :-            -";
		cout<<"\n\t\t\t-                                          -";
		cout<<"\n\t\t\t-      1. Create Root In Binary Tree.      -";
		cout<<"\n\t\t\t-      2. Add Node In Binary Tree.         -";
		cout<<"\n\t\t\t-      3. Travers In Binary Tree.          -";
		cout<<"\n\t\t\t-      4. Exit.                            -";
		cout<<"\n\t\t\t-      5.remove                            -";
		cout<<"\n\t\t\t--------------------------------------------";
		cout<<"\n\n\t\t\tEnter Your Choice : ";
		cin>>ch;

		switch(ch)
		{
			
			case 1:
				if (root == NULL)
				{
				    root = new tree;
				    cout<<"Enter Value Of Root Node : ";
				    cin>>root->data;
				}
				else
				{
					cout<<"\n\nRoot Is Already Created!!!\n\n";
				}
				break;

			case 2: if (root == NULL)
					{
				    	cout<<"\nYou Can't Add Node Because You Not Created Root Yet!!!\nPress 1 To Create Root.";
				   		break;	
					}
					else
					{
						cout<<"\nEnter Data Of Node : ";
						cin>>d;
						Add_Node(d,root);				
					}
					break;

			case 3:
				if(root!='\0')
				{
	 				cout<<"\n\nYou Have Three Types Of Travers :- \n";
					cout<<"\n1. Preorder Travers.";
					cout<<"\n2. Inorder Travers.";
					cout<<"\n3. Postorder Travers.";
					cout<<"\n\nEnter Your Choice : ";
					cin>>ch2;
	
					if(ch2 == 1)
					{
						preorder(root);
					}
					else if(ch2 == 2)
					{
						inorder(root);
					}
					else if(ch2 == 3)
					{
						postorder(root);
					}
					else
					{
						cout<<"\n\nInvalid Choice !!!\n\n";
					}
				}
				else
				{
					cout<<"\n\nSorry!!! This Binary Tree Does Not Have Any Content.\n\n";
				}
				break;

			case 4: break;
			case 5:
					cout<<"enter value to delete"<<endl;
					cin>>d;
					root=remove(d,root);
					break;
		}
	}
	return 0;
}

