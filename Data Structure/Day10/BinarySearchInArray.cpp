#include<iostream>

using namespace std;

int main()
{
	int first=0;
	int last=4;
	int arr[5]={5,10,15,20,25};
	int middle=(first+last)/2;
	int Search_ele=25;
	while(first <= last)
	{
	if(arr[middle] == Search_ele)
	{
		cout<<"Element Found At = "<<middle<<endl;
		cout<<arr[middle]<<endl;
		break;
	}
	if(arr[middle]>Search_ele)
	{
		last=middle-1;
	}
	if(arr[middle]<Search_ele)
	{
		first=middle+1;
	}
	middle=(first+last)/2;
	}
	return 0;
}
