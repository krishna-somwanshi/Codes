#include<iostream>
#include<stdlib.h>
using namespace std;

int ch,ele=0;
const int size=5;
int queue[size];
static int front,rear;

bool isfull()
{
	if(rear == size)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void inserElement(int input)
{
	if(isfull())
	{
		cout<<"stack is full"<<endl;
	}
	else
	{
		rear=rear%size;
		queue[rear]=input;
		rear++;
	}
}

bool isEmpty()
{
	if(front==rear)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void deleteElemenet()
{
	if(isEmpty())
	{
		cout<<"queue is empty"<<endl;
	}
	else
	{
		front=(front)%size;
		cout<<queue[front];
		queue[front]=NULL;
		front++;
		rear=0;
	}
}

void display()
{
	for(int i=0;i<size;i++)
	{
		cout<<queue[i]<<endl;
	}
}

int main()
{
	while(1)
	{
		cout<<"Eneter choice"<<endl;
		cout<<"1.Insert element 2.Delete element 3.Display 4.Exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Insert Element"<<endl;
				cin>>ele;
				inserElement(ele);
				break;
			
			case 2:
				cout<<"Delete:";
				deleteElemenet();
				break;
				
			case 3:
				display();
				break;
			
			case 4:
				cout<<"Exit"<<endl;
				return 0;
				break;		
					
		}
	
	}
	return 0;
}
