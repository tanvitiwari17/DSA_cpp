#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *next;
Node(int x){
data = x;
next = NULL;
}
};

void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node *removeDuplicates(Node *root)
{
    Node *head=root->next;
    Node *prev=root;

    while(head!=NULL){
        if(prev->data == head->data)
        {
            prev->next=head->next;
            head=prev->next;
        }
        else
        {
            prev=head;
            head=head->next;
        }
    }
        return root;
    }

int main()
{
    int k;
    cout<<"K: ";cin>>k;
    Node *head = NULL;
    Node *temp = head;

    for(int i=0;i<k;i++){
        int data;
        cin>>data;
        if(head==NULL)
            head=temp=new Node(data);
        else{
            temp->next = new Node(data);
            temp=temp->next;
        }
    }
    Node *result = removeDuplicates(head);
    print(result);
    cout<<endl;

    return 0;
}
