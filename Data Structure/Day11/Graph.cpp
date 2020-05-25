#include<iostream>
using namespace std;
int main()
{
	int input;
	int arr[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"arr["<<i<<"]["<<j<<"] = ";
			cin>>input;
			arr[i][j]=input;
		}
	}	
	
	cout<<"Connected Edges are ="<<endl;
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
