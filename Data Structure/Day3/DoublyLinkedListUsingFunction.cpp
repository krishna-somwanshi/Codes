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
	k->prv=k;
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

void traversal(struct node *temp)
	{
		for(temp;temp!=NULL;temp=temp->next)
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
	traversal(x);
}
