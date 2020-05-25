#include<iostream>

using namespace std;

	int queue[3];
	int count=0;
	int read=0;

int isfull()
{
	if(count==3)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int isempty()
{
	if(read==count)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void insertelement(int a)
{
	int val = isfull();
	if(val==0)
	{
		cout<<"Queue is Full"<<endl;
	}
	else
	{
		queue[count]=a;
		count++;
	}
}

void readelement()
{
	int val=isempty();
	if(val==0)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		cout<<queue[read]<<endl;
		read++;
	}
}



int main()
{
	insertelement(10);
	insertelement(20);
	insertelement(30);
	
	cout<<"queue Elements are "<<endl;
	readelement();
	readelement();
	readelement();

	return 0;	
}

