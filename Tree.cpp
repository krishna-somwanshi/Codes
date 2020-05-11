#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;	
};
struct node *newnode(int input)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->data=input;
		temp->left=NULL;
		temp->right=NULL;
		return temp;
}
struct node *insertnode(struct node *root,int x)
{
	if(root==NULL)
	{
		struct node *temp1=newnode(x);
		return temp1;
	}
	else if(x>root->data)
	{
		root->right=insertnode(root->right,x);
	}
	else if(x<root->data)
	{
		root->left=insertnode(root->left,x);
	}
	return root;
	}
void traversal1(struct node *root)
{
	if (root != NULL )
	{
		traversal1(root->left);
		cout<<root->data<<endl;
		traversal1(root->right);
	}
}
int main()
{
	struct node *p=(struct node*)malloc(sizeof(struct node));
	
	p=newnode(100);
	insertnode(p,150);
	insertnode(p,120);
	insertnode(p,24);
	insertnode(p,50);
	insertnode(p,32);
	insertnode(p,152);
	insertnode(p,925);



	traversal1(p);
}
