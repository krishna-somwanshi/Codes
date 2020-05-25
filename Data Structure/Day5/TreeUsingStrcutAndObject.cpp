#include<iostream>

using namespace std;

struct tree
{
	public:
	int data;
	struct tree *left;
	struct tree *right;	
};

int main()
{
	struct tree n1;
	n1.data=10;
	n1.left=NULL;
	n1.right=NULL;
	
	struct tree n2;
	n2.data=8;
	n2.left=NULL;
	n2.right=NULL;
	n1.left=&n2;
	
	struct tree n3;
	n3.data=15;
	n3.left=NULL;
	n3.right=NULL;
	n1.right=&n3;
	
	struct tree n4;
	n4.data=17;
	n4.left=NULL;
	n4.right=NULL;
	n1.right->right=&n4;
	
	cout<<n1.data<<endl;
	cout<<n1.left->data<<endl;
	cout<<n1.right->data<<endl;
	cout<<n1.right->right->data<<endl;
	
	
	return 0;
}
