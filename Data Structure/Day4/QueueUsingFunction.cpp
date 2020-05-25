#include<iostream>

using namespace std;

	int queue[3];
	int count=0;
	int read=0;

void insertelement(int a)
{
	queue[count]=a;
	count++;
}

void readelement()
{
	cout<<queue[read]<<endl;
	read++;
}

int main()
{
	
	insertelement(10);
	insertelement(20);
	insertelement(30);
	
	cout<<"Array Elements are "<<endl;
	readelement();
	readelement();
	readelement();
	return 0;
	
}


