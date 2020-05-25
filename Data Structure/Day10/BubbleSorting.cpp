#include<iostream>

using namespace std;

int main()
{
	int i,j;
	int arr[]={50,10,30,20,40};
	for(i=0;i<=5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
