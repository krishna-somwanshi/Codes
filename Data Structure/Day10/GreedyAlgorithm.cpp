#include<iostream>

using namespace std;

int main()
{
	int arr[5]={1,2,3,4,5};
	int t=6;
	int activity=0;
	int sum=0;
	for(int i=0;i<5;i++)
	{
		activity++;
		sum=sum+arr[i];
		if(sum == t)
		{
			cout<<"Total Work Done="<<sum<<endl;
			break;	
		}
	}
	cout<<"Total Activity Done = "<<activity<<endl;
	return 0;
}
