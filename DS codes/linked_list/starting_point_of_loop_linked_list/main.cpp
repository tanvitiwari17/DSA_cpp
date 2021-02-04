#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node{
int data;
node *next;
};

node* new_node(int val)
{
    node *temp = new node;
    temp->data=val;
    temp->next = NULL;
    return temp;
}

void display(node*head){
while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
}
cout<<endl;
}

node * detectandremoveloop(node*head)
{
    if(head==NULL ||head->next==NULL)
        return NULL;
    node *slow=head;
    node *fast=head;

    slow=slow->next;
    fast=fast->next->next;

    while(fast||fast->next){
        if(slow==fast)
            break;
        slow=slow->next;
        fast=fast->next->next;
    }

    if(slow!=fast)
        return NULL;
        slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
int main()
{
    node *head=new_node(50);
    head->next = new_node(20);
    head->next->next = new_node(15);
    head->next->next->next =new_node(4);
    head->next->next->next->next =new_node(10);

    head->next->next->next->next=head->next->next;

    node *res=detectandremoveloop(head);
    if(res==NULL)
        cout<<"Loop does not exist";
    else
        cout<<"Loop starting node is "<<res->data;

    return 0;
}
