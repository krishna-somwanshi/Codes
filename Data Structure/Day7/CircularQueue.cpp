#include <iostream>
#include <stdlib.h>
using namespace std;
int ch, ele=0;
const int size=5;
int queue[size];
static int rear, front;
bool isFull()
{
    if(rear==(size))
    {
        return true;
    }
    else
	{
        return false;
    }
}
void insertElement(int n)
{
    if(isFull())
    {
        cout<<"The queue is full"<<endl;
    }
    else
	{
            rear=(rear)%size;
            queue[rear] = n;
            rear++;
        }
}
bool isEmpty(){

    if(front==rear)
        return true;
    return false;
}
void deleteElement()
{
    if(isEmpty())
    {
        cout<<"The queue is Empty"<<endl;
    }
    else
		{
            front=(front)%size;
            cout<<"'"<<queue[front]<<"'"<<endl;
            queue[front]=0;
            front++;
            rear=0;
        }
}
void display()
{
    for(int i=0; i<=4; i++)
    {
        cout<<queue[i]<<endl;
    }
}

int main()
{

    while(1)
    {

    cout << "Choose the function to be performed: " << endl;
    cout<<"1. Insert into Queue  "<<endl;
    cout<<"2. Delete from Stack  "<<endl;
    cout<<"3. Display from Stack"<<endl;
    cout<<"4. Exit"<<endl;
    cin>>ch;

    switch(ch){

        case 1:	
				{
                    cout<<"Enter el: ";
                    cin>>ele;
                    insertElement(ele);
                    break;
                }
        case 2: 
				{
                    cout<<"Deleted : "<<endl;
                    deleteElement();
                    break;
                }
        case 3: 
				{
                    cout<<"Elements in array : "<<endl;
                    display();
                    break;
                }
        case 4: 
				{
        			cout<<" Exit ";
        			return 0;
                    //exit(1);
                }
 	   }
    }
    return 0;
}
