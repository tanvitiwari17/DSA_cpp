#include <iostream>
#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }};

void loopHere(Node* head,Node *tail,int position)
{
    if(position==0)
        return;

    Node* walk= head;
    for(int i=1;i<position;i++)
        walk=walk->next;
    tail->next = walk;
}

bool detectLoop(Node* head)
{
    unordered_set <Node *> s ;
    while(head!=NULL)
    {if(s.find(head)!=s.end())
    return 1;
    s.insert(head);

    head=head->next;
    }
    return 0;
}

int main()
{
    int n,num;
    cout<<"N:";
    cin>>n;
    Node*head,*tail;
    cout<<"\nVAL:";
    cin>>num;
    head=tail = new Node(num);
    for(int i=0;i<n-1;i++)
    {
        cin>>num;
        tail->next = new Node(num);
        tail = tail->next;
    }

    int pos;
    cout<<"\nK:";
    cin>>pos;
    loopHere(head,tail,pos);

    if(detectLoop(head))
        cout<<"True\n";
    else
        cout<<"False\n";

return 0;
}

