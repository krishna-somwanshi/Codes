#include<iostream>

using namespace std;

struct tree
{
	int data;
	struct tree *left; 
	struct tree *right;
};

void traversal1(tree *root)
{
	if (root != NULL )
	{
		traversal1(root->left);
		cout<<root->data<<"		";
		traversal1(root->right);
	}
}

int main()
{
	struct tree *t1=new tree();
	t1->data=100;
	t1->left=NULL;
	t1->right=NULL;
	
	struct tree *t2=new tree();
	t2->data=90;
	t2->left=NULL;
	t2->right=NULL;
	t1->left=t2;
	
	struct tree *t3=new tree();
	t3->data=180;
	t3->left=NULL;
	t3->right=NULL;
	t1->right=t3;
	
	struct tree *t4=new tree();
	t4->data=95;
	t4->left=NULL;
	t4->right=NULL;
	t2->right=t4;
	
	struct tree *t5=new tree();
	t5->data=160;
	t5->left=NULL;
	t5->right=NULL;
	t3->right=t5;
	
	struct tree *t6=new tree();
	t6->data=750;
	t6->left=NULL;
	t6->right=NULL;
	t3->right=t6;

	traversal1(t1);
	
	
	return 0;
}
