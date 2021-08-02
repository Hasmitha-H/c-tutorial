#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};

void display(Node *ptr)
{
    while(ptr !=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}



// deletion of the first node
// ---------------------------------------------
// Node *deletefirstNode(Node *Head)
// {
//     Node *ptr= Head;
//    Head = Head->next;
//     free(ptr);
//     return Head;
// }


// deletion  at a given index
// ----------------------------------------------
// Node *deleteatindex(Node *Head,int index)
// {
//     Node *p=Head;
//     Node *q=Head->next;
//     for(int i=0;i<index-1;i++)
//     {
//         p=p->next;
//         q=q->next;
//     }
//     p->next=q->next;
//     free(q)
//     return Head;
// }



// delete last node 
// -------------------------------------------------
// Node *deletelast(Node *Head)
// {
//     Node *p=Head;
//     Node *q=Head->next;
//     while(q->next!=NULL)
//     {
//         p=p->next;
//         q=q->next;
//     }
//     p->next=NULL;
//     free(q);
//     return Head;
// }



// delete the node at a given value
// -------------------------------------------------
Node *deletevalue(Node* Head,int value)
{
    Node *p=Head;
    Node *q=Head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data ==value)
    {
        p->next=q->next;
        free(q);
    }
    
    return Head;
}

int main()
{
Node *Head=new Node();
Node *first=new Node();
Node *second=new Node();
Node *third=new Node();
Node *fourth=new Node();

Head->data=50;
Head->next=first;

first->data=120;
first->next=second;

second->data=100;
second->next=third;

third->data=150;
third->next=fourth;

fourth->data=200;
fourth->next=NULL;


// Head = deletefirstNode(Head);
// Head= deleteatindex(Head,second);
// Head= deletelast(Head);
Head=deletevalue(Head,150);
display(Head);

return 0;
}