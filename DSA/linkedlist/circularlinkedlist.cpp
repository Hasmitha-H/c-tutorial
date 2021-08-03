#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void print(Node *Head)
{
    Node *ptr=Head;
    cout << ptr->data<< " ";
    ptr = ptr->next;
    while (ptr != Head)
    {
        cout << ptr->data<< " ";
        ptr = ptr->next;
    }
}

//insert  at first node 
Node *insertatFirst(Node *Head,int newdata)
{
    Node * ptr=new Node ();
    ptr->data=newdata;
    Node *p=Head->next;
    while(p->next!=Head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=Head;
    Head=ptr;
    return Head;

}

int main()
{
    Node *Head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    Head->data = 100;
    Head->next = first;

    first->data = 150;
    first->next = second;

    second->data = 200;
    second->next = third;

    third->data = 250;
    third->next = Head;

    Head=insertatFirst(Head,50);
    print(Head);

    return 0;
}