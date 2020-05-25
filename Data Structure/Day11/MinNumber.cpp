#include<iostream>

using namespace std;

int main()
{
	int arr[]={50,25,30,7,10};
	int min=arr[0];
	for(int i=0;i<5;i++)
	{
		if(arr[i] < min)
		{
			min=arr[i];
		}
	}
			cout<<min;
	return 0;
}
