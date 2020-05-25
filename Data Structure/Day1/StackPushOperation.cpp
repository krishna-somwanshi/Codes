#include<iostream>

using namespace std;

int stack[4];
int count=0;
void push(int a);
int isfull();

int main()
{
	push(10);
	push(20);
	push(30);
	push(40);

	//added for display on output console
	cout<<"stack elements"<<endl;
	cout<<stack[3]<<endl;
	cout<<stack[2]<<endl;
	cout<<stack[1]<<endl;
	cout<<stack[0]<<endl;

	return 0;
}

void push(int a)
{
	int r=isfull();
	if(r==0)
	{
		cout<<"stack is full";	
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
