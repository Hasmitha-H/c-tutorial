#include<iostream>
using namespace std;

class Node{
        public:
        int data;
        Node *next;
};



// insertion at the begining
// -------------------------------------------
// Node *insertathead(Node *Head,int newdata)
// {
//  Node *ptr=new Node();
//  ptr->data =newdata;
//  ptr->next=Head;
//  return ptr;
// }

// insertion in between 
// -------------------------------------------------
// Node *insertbetween(Node *Head,int newdata,int index)
// {
//     Node *ptr=new Node();
//     Node *p= Head;
//     int i=0;
//     while(i!= index-1)
//     {
//         p=p->next;
//         i++;
//     }
//     ptr->data = newdata;
//     ptr->next=p->next;
//     p->next=ptr;
//     return Head;
// }


// insertion at the end 
// ---------------------------------------------------
// Node *insertatEnd(Node *Head,int newdata)
// {
//     Node *ptr=new Node();
//     Node  *p=Head;
//     ptr->data=newdata;
//     while(p->next!=NULL)
//     {
//        p=p->next;
//     }
//        p->next=ptr;
//        ptr->next=NULL;
//        return Head;
// }


void print(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
Node *Head = new Node();
Node *first = new Node();
Node *second = new Node();
Node *third = new Node();

Head->data= 100;
Head->next=first;

first->data=150;
first->next=second;

second->data =200;
second->next=third;

third->data=250;
third->next=NULL;

// Head = inertathead(Head);
// Head = insertbetween(Head,500,1);
Head=insertatEnd(Head,800);
print(Head);
return 0;

}