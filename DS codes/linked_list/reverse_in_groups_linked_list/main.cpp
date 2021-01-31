#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;

    node(int x){
    data = x;
    next = NULL;
    }
};

void printList(struct node *node)
{
    while(node!=NULL)
    {
        cout<<node->data <<" ";
        node = node->next;
    }
    cout<<endl;
}
struct node *reversee (struct node *head, int k)
{
    // Complete this method
    node *curr = head;
    node *prev = NULL;
    node *post = NULL;
    int c = k;
        while(c-- and curr !=NULL)
        {
            post= curr->next;
            curr->next = prev;
            prev= curr;
            curr = post;
        }
        if(post!=NULL)
        head ->next = reversee(post,k);
        return prev;

}

int main()
{
    struct node *head = NULL;
    struct node *temp = NULL;
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int val;
        cout<<"\nEnter Value:";
        cin>>val;
        if(i==0)
        {
            head = new node(val);
            temp = head;
        }
        else
        {
            temp->next = new node(val);
            temp=temp->next;
        }
    }
    int k;
    cout<<"\nEnter k:";
    cin>>k;

    head = reversee(head,k);
    printList(head);

    return 0;
}
