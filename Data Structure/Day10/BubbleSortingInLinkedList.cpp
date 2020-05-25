#include<iostream>

using namespace std;

struct node
{
	int data;
	struct node* next;	
};

struct node* firstnode(int input)
{
	struct node*first=new node();
	first->data=input;
	first->next=NULL;
	return first;
}

struct node* createnode(int input1)
{
	struct node* second=new node();
	second->data=input1;
	second->next=NULL;
	return second;
}

struct node* connectnode(node* n1,node* n2)
{
	n1->next=n2;
}

void traversal(node *temp5)
{
	struct node* god=temp5;
	int arr[5];
	for(int i=0;i<5;i++)
	{
		arr[i]=god->data;
		god=god->next;
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{
	node* k1=firstnode(1900);
	node* k2=createnode(540);
	connectnode(k1,k2);
	node* k3=createnode(30);
	connectnode(k2,k3);
	node* k4=createnode(400);
	connectnode(k3,k4);
	node* k5=createnode(87);
	connectnode(k4,k5);
	traversal(k1);
	return 0;
}



/*void traversal(node* temp)
	{
		struct node* bat=temp;
		for(temp;temp != NULL;temp=temp->next)
		{
		//cout<<temp->next->next->next->next<<endl;
		//for(temp;temp != NULL;temp=temp->next)
		for(int i=0;i<5;i++)
		{
			//cout<<" 1 "<<endl;
			if(temp->data > temp->next->data)
			{
				int elem = temp->data;
				temp->data = temp->next->data;
				temp->next->data = elem;
			}
		}
	}
}

void traversal1(node* temp)
{	
	for(temp;temp!=NULL;temp=temp->next)
	{
		cout<<temp->data<<endl;
	}
}
*/
