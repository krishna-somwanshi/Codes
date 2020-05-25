#include<iostream>

using namespace std;

class node
{
	int data;
	node *next;	
	public:
	void setdata(int a)
	{
		data=a;
	}
	void setnext(node *temp)
	{
		next=temp;
	}
	int getdata()
	{
		return data;
	}
	node *getnext()
	{
		return next;
	}
};



int main()
{
	node *n1=new node();
	n1->setdata(10);
	n1->setnext(NULL);
	
	node *n2=new node();
	n2->setdata(20);
	n2->setnext(NULL);
	n1->setnext(n2);
	
	node *n3=new node();
	n3->setdata(30);
	n3->setnext(NULL);
	n2->setnext(n3);
	
	node *temp = n1;
	while(temp != NULL )
	{
		cout<<temp->getdata()<<endl;
		temp=temp->getnext();
	}
	
	return 0;
}
