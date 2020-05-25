#include<iostream>

using namespace std;

class node
{
	public:
	int data;
	node *next;
	node *prv;
	public:
		node *firstnode(int a);
		node *createnode(int b);
		void connect(node *,node *);
		void show();
};

	node *node::firstnode(int a)
		{
			node *first=new node();
			first->data=a;
			first->next=NULL;
			first->prv=NULL;
		}
		
	node *node::createnode(int b)
		{
			node *second=new node();
			second->data=b;
			second->next=NULL;
			second->prv=NULL;
			
			return second;
		}
	
	void node::connect(node *n1,node *n2)
	{
		n1->next=n2;
		n2->prv=n1;		
	}	
	

int main()
{
	node *d1,*r1;
	r1=d1->firstnode(105);
	node *d2,*r2;
	r2=d2->createnode(205);
	node *d3,*r3;
	r3=d3->createnode(305);
	
	node con;
	con.connect(r1,r2);
	con.connect(r2,r3);
	
	node *temp=NULL;
	for(temp=r1;temp != NULL;temp=temp->next)
	{
		cout<<temp->data<<endl;
	}
	
	return 0;
}
