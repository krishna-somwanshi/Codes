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
	obj1=createnode(200);
	struct node *obj2=new node();
	obj2=createnode(300);
	struct node *obj3=new node();
	obj3=createnode(400);
	
	connection(obj,obj1);
	connection(obj1,obj2);
	connection(obj2,obj3);
	
	struct node *temp=obj;
	for(temp;temp->next!=NULL;temp=temp->next);
	while(temp != NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->prv;
	}
	return 0;
}
