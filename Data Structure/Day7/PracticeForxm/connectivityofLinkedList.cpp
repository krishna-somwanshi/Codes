#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *firstnode(int input)
{
	struct node *first=new node();
	first->data=input;
	first->next=NULL;
	return first;
}
struct node *Createnode(int input)
{
	struct node *temp=new node();
	temp->data=input;
	temp->next=NULL;
	return temp;
}

struct node *connection(node *n1,node *n2)
{
		n1->next=n2;
}

int main()
{
	struct node *k=firstnode(100);
	struct node *k1=Createnode(200);
	struct node *k2=Createnode(300);
	connection(k,k1);
	connection(k1,k2);
	
	struct node **head= &k;
	head->data=50;
	head->next=&k;
	struct node *temp=k;
	while(temp != NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	return 0;
}
