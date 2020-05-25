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
	stack *temp = new stack();
	temp->data = input;
	temp->next = top;
	top = temp;
}
stack stack :: pop()
{
	if(top == NULL)
	{
		cout<<endl<<"Stack is Empty Please wait for PUSH operation.";
	}
	else
	{
		cout<<top->data<<endl;
		top = top->next;
	}
}
int main()
{
	stack *obj = new stack();
	obj->push(10);	
	obj->push(20);

	obj->pop();
	obj->pop();
	obj->pop();
	return 0;
}
