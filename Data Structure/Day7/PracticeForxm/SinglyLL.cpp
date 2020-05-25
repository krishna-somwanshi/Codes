#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
	int data;
	struct node *next;
};



int main()
{
	struct node *first=(struct node*)malloc(sizeof(struct node));
	first->data=10;
	first->next=NULL;

	struct node *second=(struct node*)malloc(sizeof(struct node));
	second->data=20;
	second->next=NULL;
	first->next=second;
	
	struct node *third=(struct node*)malloc(sizeof(struct node));
	third->data=30;
	third->next=NULL;
	second->next=third;
	
	struct node *temp=first;
	while(temp !=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	return 0;
}
