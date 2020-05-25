#include<iostream>

using namespace std;

struct demo
{
	int data;
	struct demo *next;
};


int main()
{
	struct demo d;
	d.data=10;
	d.next=NULL;
	struct demo d1;
	d1.data=20;
	d1.next=NULL;
	d.next=&d1;
	struct demo d2;
	d2.data=30;
	d2.next=NULL;
	d1.next=&d2;
	
	cout<<d.data<<endl;
	cout<<d.next<<endl;
	cout<<d.next->data<<endl;
	cout<<d.next->next<<endl;
	cout<<d.next->next->data<<endl;
	cout<<d.next->next->next<<endl;
	
return 0;
}
