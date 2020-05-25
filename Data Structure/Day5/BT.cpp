#include<iostream>
#include<stdlib.h>

using namespace std;

struct node  
{ 
    int data; 
    struct node *left; 
    struct node *right; 
}; 
struct node* newNode(int data) 
{ 
  struct node* node = (struct node*)malloc(sizeof(struct node)); 
  node->data = data; 
  node->left = NULL; 
  node->right = NULL; 
  return(node); 
} 
  
int main() 
{ 
  struct node *root = newNode(1);   
  root->left        = newNode(2); 
  root->right       = newNode(3); 
  root->left->left        = newNode(4); 
  root->left->right        = newNode(5);
  root->right->left= newNode(6); 
  root->right->right= newNode(7); 
  root->left->left->left  = newNode(4); 
	
	//cout<<root->data<<endl;  
	//cout<<root->left->data<<endl;
	//cout<<root->right->data<<endl;
	//cout<<root->left->left->left->data<<endl;	
	//cout<<root->left->left->data<<endl;
	
	struct node *temp = root;
	
	for(;(temp->left || temp->right) != 0;temp=temp->left)
	{
		cout<<temp->data<<endl;
		cout<<temp->left->data<<endl;
		cout<<temp->right->data<<endl;
	}
	
	for(;(temp->left || temp->right) != 0;temp=temp->right)
	{
		cout<<temp->data<<endl;
		cout<<temp->left->data<<endl;
		cout<<temp->right->data<<endl;
	}
	
  return 0; 
}#include<iostream>

using namespace std;

	int queue[3];
	int count=0;
	int read=0;

int isfull()
{
	if(count==3)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int isempty()
{
	if(read==count)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void insertelement(int a)
{
	int val = isfull();
	if(val==0)
	{
		cout<<"Queue is Full"<<endl;
	}
	else
	{
		queue[count]=a;
		count++;
	}
}

void readelement()
{
	int val=isempty();
	if(val==0)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		cout<<queue[read]<<endl;
		read++;
	}
}

int main()
{
	do
	{
	int a,b;
	cout<<"Enter the choice"<<endl;
	cout<<"1. Insertion 2.Show 3.Exit"<<endl;
	cin>>a;
	
	switch(a)
	{
		case 1:
			cout<<"Enter the Element";
			cin>>b;
		insertelement(b);
	break;
	
	case 2:
		cout<<"Array Elements are "<<endl;
		readelement();
	break;
	case 3:
		return 0;
		break;
	}
}
	while(1);
	return 0;	
}
