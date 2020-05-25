#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
	int data;
	node *prv;
	node *next;
};

int main()
{
	struct node *first =(struct node *)malloc(sizeof(struct node));
	first->data=30;
	first->next=NULL;
	
	struct node *second =(struct node *)malloc(sizeof(struct node));
	second->data=50;
	second->next=NULL;
	second->prv=NULL;
	second->prv=first;
	first->next=second;
	
	struct node *third =(struct node *)malloc(sizeof(struct node));
	third->data=60;
	third->next=NULL;
	third->prv=NULL;
	second->next=third;
	third->prv=second;
	
	struct node *temp = NULL;
	for(temp=first;temp!=NULL;temp=temp->next)
	{
		cout<<temp->data<<endl;
	}
	
	return 0;
}
