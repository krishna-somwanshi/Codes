#include<iostream>
#include<stdlib.h>

using namespace std;
int i;
struct node
{
	int arr[5]={10,20,30,40,50};
	//int Search_int=20;
};

struct node Display(node *root,int Search_int)
{
 	for(int i=0;i<5;i++)
 	{
 		if(root->arr[i] == Search_int)
 		{
 			cout<<"Elemet found at = "<<i<<endl;
		}
	}
}
int* bst(node *root,int Search_int)
{
	if(root->arr[i] >= Search_int)
	{
		bst(root,Search_int);
	}
	else if (root->arr[i] <= Search_int)
	{
		bst(root,Search_int);
	}
	cout<<root->arr[i];
	i++;
}
int main()
{
	return 0;
}
