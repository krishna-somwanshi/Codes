#include<iostream>

using namespace std;

int count;
int stack[4];

void push(int);
void pop();
int isfull();
int isempty();
	
int main()
{
	int x;
	do
	{
		cout<<"Enter Your Choice"<<endl;
		cout<<"1.Push 2.Pop 3.Exit"<<endl;
		cin>>x;
		switch(x)
		{
			case 1:
				int S;
				cout<<"enter the Elemnt in the stack"<<endl;
				cin>>S;
				push(S);
				break;
			case 2:
				pop();
				break;
			case 3:
			cout<<"Exit"<<endl;
			return 0;		
		}
}
while(1);
return 0;
}

void pop()
{
	int D=isempty();
	if(D==0)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		count--;
		cout<<stack[count]<<endl;
	}
}

int isempty()
{
	if(count==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void push(int a)
{
	int r=isfull();
	if(r==0)
	{
		cout<<"stack is full"<<endl;
	}
	else
	{
	stack[count]=a;
	count++;
	}
}

int isfull()
{
	if(count==4)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
