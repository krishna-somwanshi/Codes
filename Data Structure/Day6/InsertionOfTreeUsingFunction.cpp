#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
	void traversal(struct node *root)
	{
		if(root != NULL)
		{
			traversal(root->left);
			cout<<root->data<<endl;
			traversal(root->right);
		}
	}
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
		if(root == NULL)
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
int main()
{
	struct node *p1=(struct node*)malloc(sizeof(struct node));
	p1=newnode(100);
	insertnode(p1,150);
	insertnode(p1,200);
	insertnode(p1,250);
	insertnode(p1,89);
	insertnode(p1,651);
	
	traversal(p1);
	return 0;
}
