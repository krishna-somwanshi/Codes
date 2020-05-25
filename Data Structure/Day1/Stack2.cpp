#include<iostream>

using namespace std;

int main()
{
	int count=0;
	int stack[4];

	stack[count]=10;
	count++;
	stack[count]=20;
	count++;
	stack[count]=30;
	count++;
	stack[count]=40;
	count++;

	cout<<"Pop Operation"<<endl;
	count--;
	cout<<stack[count]<<endl;
	count--;
	cout<<stack[count]<<endl;
	count--;
	cout<<stack[count]<<endl;
	count--;
	cout<<stack[count]<<endl;
	
	return 0;
}
