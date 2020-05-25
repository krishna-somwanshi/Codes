#include<iostream>
#include<stdlib.h>

using namespace std;

struct tree
{
	int data;
	tree *right;
	tree *left;
};
	
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
	
	//cout<<t1->data<<endl;
	//cout<<t1->left->data<<endl;
	//cout<<t1->right->data<<endl;
	//cout<<t1->right->right->data<<endl;
	
	struct tree *temp1 = t1;
	struct tree *temp2 = t1;
	//for( ; temp1->left != NULL || temp2->right != NULL; temp1=temp1->right || temp2 = temp2->right);
	while(temp1 !=NULL || temp2 != NULL )
	{
		cout<<temp1->data;
		for(temp1->right != NULL)
		{
			temp1=temp1->right;
			cout<<temp1->data;
		}
	}
	return 0;
}
