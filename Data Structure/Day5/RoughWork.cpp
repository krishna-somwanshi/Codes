#include<iostream>

using namespace std;

int main()
{
	int a,b;
	int right=5;
	int left=5;
	int tree[5];
	cout<<"enter the element";
	cin>>a;
	tree[right]=a;
	for(int i;i<=5;i++)
	{
		cout<<"enter an element";
		cin>>b;
		if(b>a)
		{
			right++;
			tree[right]=b;
		}
		else if(b<a)
		{
			tree[left]=b;
			left--;
		}
	}
	
	cout<<tree[left]<<endl;
	left++;
	cout<<tree[left]<<endl;
	left++;
	cout<<tree[left]<<endl;
	left++;
	cout<<tree[left]<<endl;
	left++;
	//cout<<tree[left]<<endl;
	//left++;
	//cout<<tree[left]<<endl;
	//left++;
	
	
	
	
	//cout<<tree[right]<<endl;
	//right--;
	//cout<<tree[right]<<endl;
	//sright--;
	cout<<tree[right]<<endl;
	right--;
	cout<<tree[right]<<endl;
	right--;
	cout<<tree[right]<<endl;
	right--;
	cout<<tree[right]<<endl;
	right--;	
	
	
	
	for(left;left==right;right)
	{
		cout<<tree[left];
		left++;
		cout<<tree[right];
		right--;
	}
}
