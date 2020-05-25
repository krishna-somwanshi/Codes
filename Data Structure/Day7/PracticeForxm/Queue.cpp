#include<iostream>

using namespace std;
int count=0;
int read=0;
int queue[3];

int isfull()
{
	if(count == 3)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void insertELement(int input)
{
	int r=isfull();
	if(r==0)
	{
		cout<<"Queue is full"<<endl;
	}
	else
	{
		queue[count]=input;
		count++;
	}
}

int isEmpty()
{
	if(count==read)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void readElemet()
{
	int r=isEmpty();
	if(r==0)
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
	int choice,a;
	while(1)
	{
		cout<<"Eneter choice"<<endl;
		cout<<"1. Insert 2.Delete 3.Exit";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter an Element"<<endl;
				cin>>a;
				insertELement(a);
				break;
				
			case 2:
				readElemet();
				break;
				
			case 3:
			cout<<"Exit"<<endl;
			return 0;		
		}
	}
	return 0;
}
