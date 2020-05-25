#include<iostream>
#include<string.h>
using namespace std;
struct node
{
	
	//unsigned int Cfreq;
	string Cname;
	unsigned int Cmenu;
	unsigned int Cfreq;
	node *next;
public:	
node *create()
{
	node *Cust=new node();
	unsigned int menu,freq;
	string name;
	cout<<"enter customer name"<<endl;
	cin>>name;
	Cust->Cname=name;
	cout<<"enter customer freq"<<endl;
	cin>>freq;
	Cust->Cfreq=freq;
	cout<<"enter customer menu"<<endl;
	cin>>menu;
	Cust->Cmenu=menu;
	return Cust;	
}
void *conection(node *n1,node *n2)
{
	n1->next=n2;
}

void traversal(node *temp)
{
	while(temp != NULL)
	{
		cout<<temp->Cname<<endl;
		cout<<temp->Cfreq<<endl;
		cout<<temp->Cmenu<<endl;
		temp=temp->next;
	}
}
};
int main()
{
	
	node n1;
	node *p1=n1.create();
	node *p2=n1.create();
	n1.conection(p1,p2);
	n1.traversal(p1);
	return 0;
}
