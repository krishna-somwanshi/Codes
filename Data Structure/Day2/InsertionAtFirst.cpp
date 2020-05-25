#include <iostream>

using namespace std;

struct node{

    int data;
    struct node *next;
};

node* firstNode(int n)
{
    node *fnode = new node;
    fnode->data = n;
    fnode->next = NULL;
    return fnode;
}

node* cNode(int n)
{
    node *genericNode = new node;
    genericNode->data = n;
    genericNode->next = NULL;
    return genericNode;

}

void connectivity(node *n1, node *n2)
{
    n1->next = n2;
}


int main()
{
    node *d = firstNode(11);
    node *d1 = cNode(22);
    connectivity(d,d1);
    node *d2 = cNode(33);
    connectivity(d1,d2);

    while(d!=NULL)
    {
        cout<<d->data<<endl;
        d = d->next;
    }
}
