/******************************************************************************
Creating a linked list
traversing  a linked list
Adding a node in the beginning
Reversing the linked list (iterative)

*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *link;
};
int main()
{
    struct Node *first=new Node;
    struct Node *head=NULL;
    struct Node *temp=NULL;
    struct Node *prev=NULL;
    struct Node *current=NULL;
    struct Node *next=NULL;
    struct Node *second=new Node;
    struct Node *third=new Node;
    struct Node *fourth=new Node;
    fourth->data=0;
    fourth->link=NULL;
    first->data=5;
    second->data=15;
    third->data=25;
    first->link=second;
    second->link=third;
    third->link=NULL;
    head=first;
    fourth->link=head;
    head=fourth;
    temp=head;
    current=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    while(current!=NULL)
    {
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    head=prev;
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->link;
    }
    


    return 0;
}
