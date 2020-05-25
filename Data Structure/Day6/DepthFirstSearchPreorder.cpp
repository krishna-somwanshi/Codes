#include<iostream>
#include<stdlib.h>

using namespace std;

struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
};
	void traversal(struct tree *root)
	{
		if(root != NULL)
		{
			cout<<root->data<<endl;
			traversal(root->left);
			traversal(root->right);
		}
	}

int main()
{	
	struct tree *t1=(struct tree*)malloc(sizeof(struct tree));
		t1->data=100;
		t1->left=NULL;
		t1->right=NULL;	
	
	struct tree *t2=(struct tree*)malloc(sizeof(struct tree));
		t2->data=90;
		t2->left=NULL;
		t2->right=NULL;	
		
		t1->left=t2;
		
	struct tree *t3=(struct tree*)malloc(sizeof(struct tree));
		t3->data=180;
		t3->left=NULL;
		t3->right=NULL;	
	
		t1->right=t3;	
		
		struct tree *t4=(struct tree*)malloc(sizeof(struct tree));
		t4->data=95;
		t4->left=NULL;
		t4->right=NULL;
		
		t2->right=t4;
		
		struct tree *t5=(struct tree*)malloc(sizeof(struct tree));
		t5->data=160;
		t5->left=NULL;
		t5->right=NULL;
		
		t3->left=t5;
		
		struct tree *t6=(struct tree*)malloc(sizeof(struct tree));
		t6->data=750;
		t6->left=NULL;
		t6->right=NULL;
		
		t3->right=t6;
		
		traversal(t1);
		
	return 0;
}
