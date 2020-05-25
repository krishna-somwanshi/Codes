#include<iostream>

using namespace std;

class node
{
	public:
	int data;
	node *next;
	node *prv;
	public:
	node *creatnode(int );
	node *firstnode(int );
	void connect(node *,node *);
	void traversal();
};

node *node::creatnode(int input)
{
	node *second=new node();
	second->data=input;
	second->next=NULL;
		second->prv=NULL;
	return second;
}

node *node::firstnode(int input)
{
	node *first = new node();
	first->next=NULL;
	first->data=input;
	first->prv=NULL;
	
}

void node::connect(node *n1,node *n2)
{
	n1->next=n2;
	n2->prv=n1;
}

int main()
{
	int a,b,c;
	cout<<"enter the elemenet"<<endl;
	cin>>a;
	node *d1,*r1;
	r1=d1->firstnode(a);
	
	cout<<"enter the elemenet"<<endl;
	cin>>b;
	node *d2,*r2;
	r2=d2->creatnode(b);
	
	cout<<"enter the elemenet"<<endl;
	cin>>c;
	node *d3,*r3;
	r3=d3->firstnode(c);
	
	node con;
	con.connect(r1,r2);
	con.connect(r2,r3);
	
	node *temp=r1;
	for(;temp != NULL;temp=temp->next)
	{
		cout<<temp->data<<endl;
	}
	return 0;
}
