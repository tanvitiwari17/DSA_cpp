#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void removeLoop(Node* head)
{
Node * slow=head;
Node *fast = head;
Node*temp;
while(fast and fast->next)
{
    temp = slow;
    slow = slow->next;
    fast=fast->next->next;
    if(slow==fast)
        break;
}
if(slow==fast)
{
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        temp=fast;
        fast=fast->next;
    }
    temp->next = NULL;
}
}
