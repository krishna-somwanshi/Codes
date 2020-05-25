#include<iostream>
using namespace std;
struct demo
{
	int data;
	demo *next;
};
demo* firstnode(int a)
{
	demo *d=new demo;
	d->data=a;
	d->next=NULL;
	return d;
}
demo* Creatnode(int b)
{
	demo *d1=new demo;
	d1->data=b;
	d1->next=NULL;
	return d1;
}
void Connection(demo *n1,demo *n2)
{
	n1->next=n2;
}
int main()
{
	demo *d1 = firstnode(10);
	demo *d2 = Creatnode(20);
	Connection(d1,d2);	
	demo * d3 = Creatnode(30);
	Connection(d2,d3);
	while(d1 != NULL)
	{
		cout<<d1->data<<endl;
		d1=d1->next;
	}	
	return 0;
}
