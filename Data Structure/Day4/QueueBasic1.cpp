#include<iostream>

using namespace std;

int main()
{
	int queue[3];
	int count=0;
	int read=0;
	queue[count]=10;
	count++;
	queue[count]=20;
	count++;
	queue[count]=30;
	
	cout<<"Queue Elements are"<<endl;
	cout<<queue[read]<<endl;
	read++;
	cout<<queue[read]<<endl;
	read++;
	cout<<queue[read]<<endl;
	
	return 0;
	
}
