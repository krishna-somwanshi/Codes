#include<iostream>

using namespace std;

void Searching();

int main()
{
	Searching();
	return 0;
}


void Searching()
{
	int arr[5]={10,20,30,40,50};
	int a,Search_ele=30;
for(int i=0;i<5;i++)
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
}
