#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
	int data;
	struct node *prv;
	struct node *next;
};

node *firstnode(int a)
{
	node *k=new node();
	k->data=a;
	k->next=NULL;
	k->prv=NULL;
	return k;
}

node *creatnode(int b)
{
	node *k1=new node();
	k1->data=b;
	k1->next=NULL;
	k1->prv=NULL;
	return k1;
}

void connection(struct node *c,struct node *d)
{
	d->prv=c;
	c->next=d;
}

traverse(node *x)
{
	struct node *temp;
		for(temp=x;temp->next!=NULL;temp=temp->next);
		for(temp;temp!=NULL;temp=temp->prv)
		{
			cout<<temp->data<<endl;
		}
}

int main()
{
		struct node *x=firstnode(100);
		struct node *x1=creatnode(200);
		connection(x,x1);
		struct node *x2=creatnode(300);
		connection(x1,x2);
		traverse(x);
	return 0;
}
