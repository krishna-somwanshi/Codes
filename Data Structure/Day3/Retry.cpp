#include<iostream>

using namespace std;
class node
{
	public:	
	int data;
	node *next;
	node *prv;
	public:
	node *creatnode(int);
	node *firstnode(int);
	node coonection(node *,node*);
	travesrsal(node *); 
};

	node *node::firstnode(int input)
{
	node *first=new node();
	first->data=input;
	first->next=NULL;
	first->prv=NULL;
	
	return first;
}
node *node::creatnode(int input)
	{
		node *second=new node();
		second->data=input;
		second->next=NULL;
		second->prv=NULL;
		
		return second;
	}
	node node::coonection(node *n1,node *n2)
	{
		n1->next=n2;
		n2->prv=n1;
	}
void travesrsal(node *temp)
	{
		for(;temp != NULL; temp = temp->next)
		{
			cout<<temp->data<<endl;
		}
	}


int main()
{
	int a,b,c;
	node *d1,*r1;
	cout<<"enter the first elemenet"<<endl;
	cin>>a;
	r1=d1->firstnode(a);
	
	node *d2,*r2;
	cout<<"enter the second elemenet"<<endl;
	cin>>b;
	r2=d2->creatnode(b);
	
	node *d3,*r3;
	cout<<"enter the third elemenet"<<endl;
	cin>>c;
	r3=d3->creatnode(c);
	
	node con;
	con.coonection(r1,r2);
	con.coonection(r2,r3);
	
	travesrsal(r1);
	
	return 0;
}
