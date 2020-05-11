#include<iostream>

using namespace std;

int main()
{
	int arr [ 9 ] = { 10 , 1056 , 56 , 23 , 56 , 61 , 95 , 66 , 140};
	int max = arr [ 0 ] ;
	int second_max = arr [ 1 ] ;
	int third_hightst=arr[2];
	if(second_max > max)
	{
		//int temp = max;
		max = second_max;
		//second_max =max; 
	}
	for(int i=2;i<9;i++)
	{
		if(arr[i] > max)
		{
			second_max=max;
			third_hightst=second_max;
			max = arr[i];
		}
		else if(arr[i] > second_max)
		{
			third_hightst = second_max ;
			second_max = arr[i];
		}
		else if(arr[i] > second_max)
		{
			third_hightst = arr[i];
		}
	}
	cout<<"MAX = "<<max<<endl;
	cout<<"Second MAX = "<<second_max<<endl;
	cout<<"third_hightst = "<< third_hightst ;
	return 0;
}
