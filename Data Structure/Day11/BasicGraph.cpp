#include<iostream>

using namespace std;

int main()
{
	int input;
	int arr[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	cout<<"are A and B connected ?"<<endl;
	arr[0][1]=1;
	arr[0][3]=1;
	
	arr[1][2]=1;
	arr[1][0]=1;
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[i][j] == 1)
			{
			cout<<i+1<<"->"<<j+1<<endl;
			}
		}
	}
}
