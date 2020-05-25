#include<iostream>

using namespace std;

int ch,ele=0;
const int size=5;
int queue[size];
static int front,rear;

bool isfull()
{
	if(rear==size)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void insertelemenet(int input)
{
	if(isfull())
	{
		cout<<"Queue is Full"<<endl;
	}
	else
	{
		rear=rear%size;
		queue[rear]=input;
		rear++;
	}
}

bool isempty()
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

void DeleteElemenet()
{
	if(isempty())
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		front=front%size;
		cout<<"DEleted ELement :";
		cout<<queue[front]<<endl;
		queue[front]=NULL;
		front++;
		rear=0;
	}
}

void Display()
{
	for(int i=0;i<size;i++)
	{
		cout<<queue[i]<<endl;
	}
}

int main()
{
	insertelemenet(100);
	insertelemenet(200);
	Display();
	DeleteElemenet();
	cout<<"After deletion \n \n";
	Display();
	
	return 0;
}
