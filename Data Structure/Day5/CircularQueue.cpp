#include<iostream>

using namespace std;
	int queue[3];
	int count=0;
	int read=0;
int isfull()
{
	//if((count+1)/3)//add only three
	//if((count+1)%3)//shows full and empty
	//if((read+1)%3)
	//if((read+1)/3 && (read+1)%3)
	if(count==0)
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
	do
	{
	int a,b;
	cout<<"Enter the choice"<<endl;
	cout<<"1. Insertion 2.Show 3.Exit"<<endl;
	cin>>a;
	
	switch(a)
	{
		case 1:
			cout<<"Enter the Element";
			cin>>b;
		insertelement(b);
	break;
	
	case 2:
		cout<<"Array Elements are "<<endl;
		readelement();
	break;
	case 3:
		return 0;
		break;
	}
}
	while(1);
	return 0;	
}

