#include<iostream>

using namespace std;

struct demo
{
		int data;
		struct demo *next;
};

void insert1(int x);
void insert2(int y);
void insert3(int z);

int main()
{
	insert1(10);
	insert2(20);
	insert3(30);	
	
	
	return 0;
}

void insert1(int x)
{
	demo d;
	d.data=x;
	d.next=NULL;
	//cout<<d.data<<endl;
}

void insert2(int y)
{
	demo d1;
	d1.data=y;
	d1.next=NULL;
	//cout<<d1.data<<endl;
	d->next->next=d1;
}

void insert3(int z)
{
	demo d2;
	d2.data=z;
	d2.next=NULL;
	//cout<<d2.data<<endl;
	//d1->next=d2;
}



