#include<iostream>

using namespace std;

int stack[4];
int count=1;
void push(int a);
void pop();
int isempty();
int isfull();

int main()
{
	do
	{
	int a;
	cout<<"enter the option"<<endl;
	cout<<"\n 1.Push \n 2.Pop \n 3.Exit \n ";
	cin>>a;
	switch(a)
	{
	case 1:
		int x;
		cout<<"Enter The Element"<<endl;
		cin>>x;
		push(x);
		break;
	case 2:
			pop();			
			break;
	case 3:
		cout<<"Exit"<<endl;
		return 0;
	return 0;
}
}
while(1);
	return 0;
}


	void push(int a)
		{
			int r=isfull();
			if(r==0)
			{
				cout<<"Stack Is Full \n Please Wait For Sometime "<<endl;	
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

	void pop()
		{
			int r=isempty();
			if(r==0)
			{
				cout<<"Stack Is Empty"<<endl;
			}
			else
			{
				count--;
				cout<<stack[count]<<endl;
			}
		}
		int isempty()
		{
		if(count==1)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
