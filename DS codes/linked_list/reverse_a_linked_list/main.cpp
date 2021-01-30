#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int data)
    {
        this->data=data;
        next=NULL;
    }

};

struct linkedlist
{
    Node* head;
    linkedlist()
    {
        head = NULL;
    }

    void reversed()
    {
        Node *current =head;
        Node * prev = NULL;
        Node * post= NULL;

        while(current!=NULL)
        {
            post = current->next;
            current->next = prev;
            prev = current;
            current = post;
        }
        head=prev;
    }

    void print()
    {
        Node *temp =head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    void push(int data)
    {
        Node * temp =new Node(data);
        temp->next = head;
        head= temp;
    }
};
int main()
{
    linkedlist l1;
    l1.push(1);
    l1.push(2);
    l1.push(3);
    l1.push(4);
    l1.push(5);

    cout<<"Original: ";
    l1.print();
    l1.reversed();
    cout<<"\nReversed: ";
    l1.print();
    return 0;
}
