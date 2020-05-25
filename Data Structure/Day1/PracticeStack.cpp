#include<iostream>

using namespace std;
int count=0;
int stack[4];
void push(int a);
int isfull();

int main()
{
	push(10);
	push(20);
	push(30);
	push(40);

	count--;
	cout<<stack[count--]<<endl;
	cout<<stack[count--]<<endl;
	cout<<stack[count--]<<endl;
	cout<<stack[count--]<<endl;
	return 0;
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
