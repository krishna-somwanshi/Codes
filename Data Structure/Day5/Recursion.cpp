#include<iostream>

using namespace std;

int display(int n=5)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		cout<<n<<endl;
		n--;
		display(n);
	}
}


int main()
{
	display();
return 0;
}
