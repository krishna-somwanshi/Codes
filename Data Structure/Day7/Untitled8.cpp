#include<iostream>
using namespace std;
class node
{
	string CName;
	unsigned int CMenu;
	unsigned int Cfreq;
	node *next;
	public:	
	node *create()
	{
	string name;
	unsigned int frequ,menu;
	node *cust=new node();
	cout<<"enter the name"<<endl;;
	cin>>name;
	cust->CName=name;
	cout<<"enter menu"<<endl;
	cin>>menu;
	cust->CMenu=menu;
	cout<<"enter the frequence"<<endl;
	cin>>frequ;
	cust->Cfreq=frequ;
	return cust;
	}
node *connection(node *n1,node *n2)
{
	n1->next=n2;
}
void traverse(node *temp)
{
	while(temp!=NULL)
	{
		cout<<temp->CName<<endl;
		cout<<temp->CMenu<<endl;
		cout<<temp->Cfreq<<endl;
		temp=temp->next;
	}
}
};

int main()
{
	node t1;
	node *d1=t1.create();
	node *d2=t1.create();
	t1.connection(d1,d2);
	t1.traverse(d1);
	return 0;
}
