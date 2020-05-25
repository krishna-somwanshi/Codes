#include<iostream>

using namespace std;

int main()
{
	int size;
	cout<<"Enter Array Size"<<endl;
	cin>>size;
	int arr[size];
	
	int a,Search_ele;
	
	cout<<"Enter Element In Array"<<endl;
	for(int j=0;j<size;j++)
	{
		cin>>arr[j];
	}
	
	cout<<"Enter Element You Want To search"<<endl;
	cin>>Search_ele;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]==Search_ele)
		{
			cout<<"Elemet founde at = "<<i<<endl;
			a=i;
		}
	}
	
	if(arr[a] != Search_ele)
	{
		cout<<"Element not found"<<endl;
	}
	return 0;
}
