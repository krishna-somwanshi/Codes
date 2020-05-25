#include<iostream>
#include<stdlib.h>
using namespace std;



struct node
{
	int data;
	struct node *next;
	struct node *prv;
};


int main()
{
	struct node *first=(struct node*)malloc(sizeof(struct node));
	first->data=100;
	first->next=NULL;
	first->prv=NULL;
	
	struct node *second=(struct node*)malloc(sizeof(struct node));
	second->data=200;
	second->next=NULL;
	second->prv=NULL;
	second->prv=first;
	first->next=second;
	
	struct node *third=(struct node*)malloc(sizeof(struct node));
	third->data=300;
	third->next=NULL;
	third->prv=NULL;
	second->next=third;
	third->prv=second;
	
	struct node *temp=NULL;
	for(temp=first;temp!=NULL;temp=temp->next)
	{
		cout<<temp->data<<endl;
	}
	return 0;
}
