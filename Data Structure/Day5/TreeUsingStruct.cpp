#include<iostream>
#include<stdlib.h>

using namespace std;

struct tree
{
	int data;
	tree *right;
	tree *left;
};


void traverse(tree *root)
	{
		//cout<<"calling traversal"<<endl;
		if(root != NULL)
		{
		traverse(root->left);
		cout<<root->data<<endl;
		traverse(root->right);
		}
}
int main()
{
	struct tree *t1=(struct tree*)malloc(sizeof(struct tree));
	t1->data=10;
	t1->left=NULL; 
	t1->right=NULL;
	
	struct tree *t2=(struct tree*)malloc(sizeof(struct tree));
	t2->data=15;
	t2->left=NULL;
	t2->right=NULL;
	t1->right=t2;
	
	struct tree *t3=(struct tree*)malloc(sizeof(struct tree));
	t3->data=8;
	t3->left=NULL;
	t3->right=NULL;
	t1->left=t3;
	
	struct tree *t4=(struct tree*)malloc(sizeof(struct tree));
	t4->data=17;
	t4->left=NULL;
	t4->right=NULL;
	t2->right=t4;
	
	tree *root=t1;	
	traverse(t1);
    //cout<<t1->data<<endl;
	//cout<<t1->left->data<<endl;
	//cout<<t1->right->data<<endl;
	//cout<<t1->right->right->data<<endl;

	
	
	return 0;
}
