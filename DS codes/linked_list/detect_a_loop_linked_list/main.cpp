#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
struct Node* next;
int flag;
};

void push(Node **head,int val){
    Node * temp = new Node;
    temp->data = val;
    temp->flag = 0;
    temp->next = *head;
    *head = temp;
}

bool detectloop(struct Node *head)
{
    while(head!=NULL)
    {
        if(head->flag==1)
            return true;

        head->flag = 1;
        head = head->next;
}
return false;
}
int main()
{
    struct Node * head=NULL;
    push(&head,20);
    push(&head,4);
    push(&head,15);
    push(&head,10);

    head->next->next->next->next = head;

    if (detectloop(head))
        cout<<"Loop found";
    else
        cout<<"No loop";
    return 0;
}
