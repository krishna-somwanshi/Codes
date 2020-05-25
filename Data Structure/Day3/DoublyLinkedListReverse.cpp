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
	first->prv = NULL;
	
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
	
	struct node *temp;
	for(temp=first;temp->next!=NULL;temp=temp->next)
	{
		cout<<"Forward"<<temp->data<<endl;
	}
	//for(temp;temp!=NULL;temp=temp->prv)
	while(temp != NULL)
	{
		cout<<"Reverse"<<temp->data<<endl;
		temp=temp->prv;
	}
	return 0;
}
