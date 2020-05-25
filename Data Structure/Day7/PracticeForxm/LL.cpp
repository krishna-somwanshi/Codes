#include<iostream>

using namespace std;

struct node
{
	int data;
	struct node *prv;
	struct node *next;
};

struct node *firstnode(int input)
{
	struct node *first=new node();
	first->data=input;
	first->next=NULL;
	first->prv=NULL;
	return first;
}

struct node *createnode(int input)
{
	struct node *create=new node();
	create->data=input;
	create->next=NULL;
	create->prv=NULL;
	return create;
}

struct node connection(node *n1,node *n2)
{
	n1->next=n2;
	n2->prv=n1;
}

int main()
{
	struct node *obj=new node();
	obj=firstnode(100);
		struct node *obj1=new node();
	obj1=firstnode(200);
	connection(obj,obj1);
	
	struct node *temp=new node();
	cout<<temp->data;
	
	return 0;
}

