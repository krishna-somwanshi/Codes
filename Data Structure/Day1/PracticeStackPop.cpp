#include<iostream>

using namespace std;

int count=4;
int stack[4]={10,20,30,40};

void pop();
int isempty();

int main()
{
	pop();
	pop();	
	pop();
	pop();
	
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
