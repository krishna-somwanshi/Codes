#include<iostream>

using namespace std;
int count=0;
int stack[4];

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
void push(int input)
{
	int r=isfull();
	if(r==0)
	{
		cout<<"stack is full"<<endl;
	}
	else
	{
		stack[count]=input;
		count++;
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
void pop()
{
	int r=isempty();
	if(r == NULL)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		count--;
		cout<<stack[count]<<endl;
	}
}


int main()
{
	int choice,input;
	while(1)
	{
		cout<<"Enter choice"<<endl;
		cout<<"1.push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"enter element:"<<endl;
				cin>>input;
				push(input);
				break;
				
				case 2:
					pop();
					break;
				
				case 3:
				cout<<"Exit";
				return 0;	
		}
	}
	return 0;
}
