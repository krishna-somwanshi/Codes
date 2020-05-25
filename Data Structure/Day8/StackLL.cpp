#include<iostream>

using namespace std;

class node
{
	int data;
	node *next;
	public:
		node *push(int n);
		node pop();
		node *top=NULL;
};

node *node::push(int input)
{
	node *n1=new node();
	n1->data=input;
	n1->next=top;
	top=n1;
}

node node::pop()
{
	if(top==NULL)
	{
		cout<<"Stack is Empty"<<endl;
	}
	else
	{
		cout<<top->data<<endl;
		top=top->next;
	}
}

int main()
{

	node *obj=new node();
	obj->push(10);
	obj->push(20);
	obj->push(30);
	obj->push(40);

obj->pop();
obj->pop();
obj->pop();
obj->pop();
obj->pop();
return 0;	
}

