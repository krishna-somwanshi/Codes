#include<iostream>

using namespace std;

class node
{
	public:
	int data;
	node *next;
	node *prv;
	public:
	node *firstnode(int );
	node *creatnode(int );
	void connection(node *n1,node *n2);			
	void traverse(node *);
	
};	
	node * node::firstnode(int input)
	{
		node *first=new node();
	
		first->data=input;
		first->next=NULL;
		first->prv=NULL;	
		
		return first;
	}
	node *node::creatnode(int input)
	{
		node *create=new node();
		create->data=input;
		create->next=NULL;
	
		return create;
	}
	
void node::connection(node *n1,node *n2)
	{
		n1->next=n2;
		n2->prv=n1;
	}
	
	void traverse(node *temp)
	{
	for(;temp != NULL;temp=temp->next)
	{
		cout<<temp->data<<endl;	
	}	
	}
int main()
{
	int a,b,c;
	node *d,*r1;
	cout<<"enter the element which you want to add first"<<endl;
	cin>>a;
	r1=d->firstnode(a);
	
	node *d1,*r2;
	cout<<"enter the element which you want to add second"<<endl;
	cin>>b;
	r2=d1->creatnode(b);
	
	node *d2,*r3;
	cout<<"enter the element which you want to add third"<<endl;
	cin>>c;
	r3=d2->creatnode(c);
	
	node result;
	result.connection(r1,r2);
	result.connection(r2,r3);
	traverse(r1); 
	return 0;
}
