#include<iostream>
using namespace std;
struct node
{
	int data;	
	struct node* next;
	struct node* arr[4]={NULL,NULL,NULL,NULL};
};
	struct node* firstnode()
	{
		struct node* first=new node();
		first->data=1;
		struct node* first1=new node();
		first->next=first1;
		first1->data=2;
		first1->next=NULL;
		first->arr[0]=first;
	}
	struct node* secondnode()
	{
		struct node* third=new node();
		third->data=4;
		struct node* third3=new node();
		third->next=third3;
		third3->data=2;
		third3->next=NULL;
		third->arr[2]=third;
	}
	void traversal(node* tree)
	{
		cout<<tree->data<<endl;
		cout<<tree->next->data<<endl;
	}
int main()
{
			struct node* val=firstnode();
			struct node* val2=secondnode();
			traversal(val);
			traversal(val2);		
	return 0;
}
