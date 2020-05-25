#include<iostream>

using namespace std;
int Searching();
int Search_ele=30;
int arr[5]={10,20,30,40,50};
int main()
{
	int	v = Searching();
	if(v != 0)
	{
		cout<<"Found Element At = "<<v<<endl;
	}
	else
	{
		cout<<"Element Not Found"<<endl;
	}
	return 0;
}

int Searching()
{
	int b;
	for(int i=0;i<=5;i++)
	{
		if(arr[i] == Search_ele)
		{
			b=i;
		}
	}
	return b;
}
