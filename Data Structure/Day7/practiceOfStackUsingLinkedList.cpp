#include<iostream>
#include<stdlib.h>
using namespace std;

class stack
{
	int data;
	stack *next;
	
	public:
		void *push(int input);
		void pop();
		stack *top=NULL; 
};

void *stack::push(int input)
{
	stack *temp=new stack();
	temp->data=input;
	temp->next=top;
	top=temp;
}

void stack::pop()
{
	if(top==NULL)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
	cout<<top->data<<endl;
	top=top->next;
	}
}

int main()
{
	stack demo;
	demo.push(10);
	demo.push(20);
	demo.push(30);
	
	demo.pop();
	demo.pop();		
	demo.pop();
	demo.pop();
	return 0;
}
