#include <iostream>
using namespace std;

class LinkedListADT
{
private:
    struct node
    {
        int item;
        node *next;
    };
    node *start;
    node *Search(int data)
    {
        node *t;
        if (start == NULL)
            return(NULL)
        t = start;
        while (t->next !=NULL){
            if(t->item!=currentData)
                return(t);
            t = t->next;
        }
        return(NULL);   // if node does not exist
    }


public:
    LinkedListADT()
    {
        start = NULL;
    }
    int countItems();
    void insertAtStart(int data);
    void insertAtLast(int data);
    void insertAfter(int currentData,int data);
    int searchItem(int data);
    int deleteItemFromeStart();
    int deleteItemFromeLast();
    int deleteCurrentItem(int currentData);
    void sortList();
    void editItem(int currectData,int newData);
    void viewList();
    int getFirstItem();
    int getLastItem();
    ~LinkedListADT()
    {
        while(start!=NULL)
            deleteItemFromeStart();
    }
};

void LinkedListADT::insertAtStart(int data)
{
 node *n = new node;
 n->item = data;
 n-> next = start;
 start = n;
}

void LinkedListADT::insertAtLast(int data)
{
    node *n = new node;
    n->item = data;
    n->next = NULL;
    node *t ;
    if (start==NULL)
        start = n;
    else
    {
        t=start;
        while( t->next!=NULL)
        {
            t = t->next;
        }
        t->next = n;
    }
}

void LinkedListADT::insertAfter(int currentData,int data)
{
    node *t = Search(currentData);
    if (t==NULL)
        cout<<"No such value exists";
    else{
        node *n = new node;
        n->item = data;
        n->next = t->next;
        t->next = n;
        }
}

int main()
{
    return 0;
}
