#include <iostream>
#include <stdlib.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void print(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data<< " ";
        ptr = ptr->next;
    }
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
    third->next = NULL;

    print(Head);
    return 0;
}