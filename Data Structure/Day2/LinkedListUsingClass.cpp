#include<iostream>

using namespace std;

class demo
{
	int data;
	demo next;
	demo *p=new demo();
	public:
		void setdata(int a)
		{
			data = a;
		}
		void nextadd()
		{
			next = 0;
		}
		
		void nextadd(demo c)
		{
			next=c;
		}
		
		void show()
		{
			cout<<data;
			cout<<next;
		}
};


int main()
{
	demo d1;
	d1.setdata(10);
	demo d2;
	d2.setdata(20);
	d2.nextadd(d1);
	
	d1.show();
	d2.show();
	
	return 0;
}
