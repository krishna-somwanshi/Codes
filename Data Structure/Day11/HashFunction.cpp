#include<iostream>

using namespace std;

int hash_function(int search_ele)
{
	int index_no = search_ele % 7;
	
	return index_no;
}

int main()
{
	int arr[1000];
	int input;
	cout<<"Enter an element"<<endl;
	cin>>input;
	int i=hash_function(input);
	arr[i]=input;
	
	cout<<"Enter the numeber"<<endl;
	cin>>input;
	i=hash_function(input);
	arr[i]=input;
	
	cout<<"Enter the numeber"<<endl;
	cin>>input;
	i=hash_function(input);
	arr[i]=input;
	
	cout<<"Enter the numeber"<<endl;
	cin>>input;
	i=hash_function(input);
	arr[i]=input;
	
	cout<<"Enter the numeber"<<endl;
	cin>>input;
	i=hash_function(input);
	arr[i]=input;
	
	int search_ele;
	cout<<"Enter element you want to search"<<endl;
	cin>>search_ele;
	int val=hash_function(search_ele);
	cout<<"elemet found at"<<val<<endl;
	cout<<arr[val]<<endl;
	
	cout<<"Enter element you want to search"<<endl;
	cin>>search_ele;
	val=hash_function(search_ele);
	cout<<"elemet found at"<<val<<endl;
	cout<<arr[val]<<endl;
	
	cout<<"Enter element you want to search"<<endl;
	cin>>search_ele;
	val=hash_function(search_ele);
	cout<<"elemet found at"<<val<<endl;
	cout<<arr[val]<<endl;
	
	cout<<"Enter element you want to search"<<endl;
	cin>>search_ele;
	val=hash_function(search_ele);
	cout <<"elemet found at"<<val<<endl;
	cout<<arr[val]<<endl;
	return 0;
}
