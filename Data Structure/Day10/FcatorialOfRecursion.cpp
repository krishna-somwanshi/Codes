#include<iostream>

using namespace std;

int fact(int n)
{
	if(n == 0)
	{
		return 1;
	}
	return n=n*fact(n-1);
}
int main()
{
	int value;
	cout<<"Enter The Value"<<endl;
	cin>>value;
	int val=fact(value);
	cout<<val<<endl;
	return 0;
}
