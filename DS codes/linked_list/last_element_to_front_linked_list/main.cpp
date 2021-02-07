#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node * next;
};

void move_to_front(Node** head){

if (*head == NULL || (*head)->next == NULL)
    return;

Node *temp=*head;
Node *pre=NULL;
while(temp->next!=NULL)
{
    pre=temp;
    temp=temp->next;
}
pre->next=NULL;
temp->next=*head;
*head=temp;
}
void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}


/* Function to print nodes in a given linked list */
void printList(Node *node)
{
    while(node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

/* Driver code */
int main()
{
    Node *start = NULL;

    /* The constructed linked list is:
    1->2->3->4->5 */
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);

    cout<<"Linked list before moving last to front\n";
    printList(start);

    move_to_front(&start);

    cout<<"\nLinked list after removing last to front\n";
    printList(start);

    return 0;
}
