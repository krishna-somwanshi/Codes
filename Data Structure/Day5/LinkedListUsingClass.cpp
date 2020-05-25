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
	next = temp;
}
int getdat()
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
	node *first=new node();
	first->setdata(10);
	first->setnext(NULL);
	
	node *second=new node();
	second->setdata(20);
	second->setnext(NULL);
	first->setnext(second);
	
	node *third=new node();
	third->setdata(30);
	third->setnext(NULL);
	second->setnext(third);
	
	cout<<first->getdat()<<endl;
	cout<<first->getnext()->getdat()<<endl;
	cout<<first->getnext()->getnext()->getdat()<<endl;
	
	return 0;
}
