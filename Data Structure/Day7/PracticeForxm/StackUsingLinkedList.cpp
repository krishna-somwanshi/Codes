#include<iostream>
using namespace std;
class stack
{
	int data;
	stack *next;
	public:
		stack *push(int);
		stack pop();
		stack *top = NULL;
};

stack *stack :: push(int input)
{
	stack *temp=new stack();
	temp->data=input;
}
