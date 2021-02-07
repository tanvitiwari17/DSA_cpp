Node* findIntersection(Node* head1, Node* head2)
{
    Node* temp1=head1;
    Node* temp2=head2;
    Node* head=NULL;
    Node* temp=NULL;
    while(temp1!=NULL and temp2!=NULL)
    {
        if(temp1->data == temp2->data)
        {
            Node* new_node = new Node(temp1->data);
            if(head)
            temp->next = new_node;
            else
            head= new_node;
            temp=new_node;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if(temp1->data<temp2->data)
        temp1=temp1->next;
        else
        temp2=temp2->next;
    }
    return head;
    }
