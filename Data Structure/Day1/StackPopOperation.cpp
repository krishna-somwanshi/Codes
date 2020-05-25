#include<iostream>

using namespace std;

int stack[4]={10,20,30,40};
int count = 3;
void pop();
int isempty();

int main()
{
	pop();	
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	
	return 0;
}

void pop()
{
	int r=isempty();
	if(r==0)
	{
		cout<<"Stack Is Empty"<<endl;
	}
	else
	{
	cout<<stack[count]<<endl;
	count--;
	}
}

int isempty()
{
	if(count==-1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
