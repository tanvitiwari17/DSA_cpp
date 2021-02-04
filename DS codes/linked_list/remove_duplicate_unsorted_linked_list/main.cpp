#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
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

Node * removeDuplicates( Node *head)
{
  unordered_set<int> k;

 Node * prev = NULL;
 Node * temp = head;
 while(temp!=NULL){
     if(k.find(temp->data)!=k.end())
     {
         prev->next = temp->next;
         delete(temp);
 }
 else
 {
     k.insert(temp->data);
     prev=temp;
 }
 temp=prev->next;
 }
 return head;
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
