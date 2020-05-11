#include<iostream>

using namespace std;

int main()
{
	int number;
	int rem;
	cout<<"Enter Decimal Number = ";
	cin>>number;
	
	int binary[10];
	int index=-1;
	int i=0;
	
	while( number != 0)
	{
		rem = number%2;
		number = number/2;
		index++;
		binary[index] = rem;
	}
	cout<<"Binary Code = ";

	for(int j=index; j>=0;j--)
		cout<<binary[j];
}