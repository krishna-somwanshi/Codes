#include<iostream>

using namespace std;
int count=0;
int stack[4];
void push(int a);
void pop();

int main()
	{
		push(10);
		push(20);
		push(30);
		push(40);
	
	cout<<"Stack Elements"<<endl;
		
		pop();
		pop();
		pop();
		pop();
		return 0;
	}
	
	void push(int a)
	{
		stack[count]=a;
		count++;
	}
	
	void pop()
	{
		count--;
		cout<<stack[count]<<endl;
	}
	
