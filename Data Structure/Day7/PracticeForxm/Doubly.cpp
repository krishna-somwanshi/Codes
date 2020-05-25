#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
	int data;
	struct node *next;
	struct node *prv;
};
struct node *firstnode(int a)
{
	struct node *n1=new node();
	n1->data=a;
	n1->next=NULL;
	n1->prv=NULL;
	return n1;
}

struct node *addnode(int b)
{
	struct node *n2=new node();
	n2->data=b;
	n2->next=NULL;
	n2->prv=NULL;
	return n2;
}
void connection(node *b1,node *b2)
{
	b1->next=b2;
	b2->prv=b1;
}

void traversal(struct node *temp)
{
	for(temp;temp != NULL;temp=temp->next)
	{
		cout<<temp->data<<endl;
	}
}

void traversalREV(struct node *temp)
{
	cout<<"REVERSE"<<endl;
	for(temp; temp->next != NULL;temp=temp->next);
	{
		while(temp != NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->prv;
		}
	}
}

int main()
{
	struct node *k1=firstnode(100);
	struct node *k2=addnode(200);
	struct node *k3=addnode(300);
	connection(k1,k2);
	connection(k2,k3);
	
	traversal(k1);
	traversalREV(k1);
	
}
