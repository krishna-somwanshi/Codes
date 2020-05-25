#include<iostream>

using namespace std;

struct node
{
	int data;
	node *left;
	node *right;	
};

node *newnode(int input)
{
	struct node *temp=new node();
	temp->data=input;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

node *createnode(node *root,int x)
{
	if(root == NULL)
	{
		node *temp1=newnode(x);
		return temp1;
	}
	else if(x>root->data)
	{
		root->right=createnode(root->right,x);
	}
	else if(x<root->data)
	{
		root->left=createnode(root->left,x);
	}
	return root;
}

void traversal(node *temp2)
{
	if(temp2 != NULL)
	{
		traversal(temp2->left);
		cout<<temp2->data<<endl;
		traversal(temp2->right);
	}
}

int main()
{
	struct node *p=new node();
	p=newnode(100);
	
	createnode(p,150);
	createnode(p,500);
	createnode(p,50);
	createnode(p,24);
	
	traversal(p);
	
	return 0;
}
