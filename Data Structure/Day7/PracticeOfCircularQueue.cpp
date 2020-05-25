#include<iostream>

using namespace std;
	int ch,ele=0;
	const int size=5;
	int queue[size];
	static int rear,front;
	
	bool isfull()
	{
		if(rear==(size))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	void insertElement(int input)
	{
		if(isfull())
		{
			cout<<"Queue is full"<<endl;
		}
		else
		{
			rear=(rear)%size;
			queue[rear]=input;
			rear++;
		}
		
	}

bool isEmpty()
{
	if(rear==front)
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
		cout<<"the queue is empty"<<endl;
	}
	else
	{
		front=(front)%size;
		cout<<"Deleted = ";
		cout<<queue[front]<<endl;
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
	cout<<"Eneter your choice :"<<endl;
	cout<<"1.Insert elemenet 2.Delete element 3.Display 4.Exit "<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
		cout<<"Enter element"<<endl;
		cin>>ele;
		insertElement(ele);
		break;
		
		case 2:
		cout<<"Delete:"<<endl;
		deleteElemenet();
		break;
		
		case 3:
		cout<<"Elements in queue"<<endl;
		display();
		break;
		
		case 4:
			cout<<"Exit"<<endl;
			return 0;	
	}
	}
	return 0;
}
