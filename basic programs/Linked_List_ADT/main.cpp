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
            if(t->item!=Data)
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
    int deleteItemFromStart();
    int deleteItemFromLast();
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

int LinkedListADT::countItems()
{
  int Count =0;
  node *t;
  t=start;
  while(t->next!=NULL)
  {
      Count++;
      t=t->next;
  }
  return(Count);
}

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

int LinkedListADT::searchItem()
{

}

int LinkedListADT::deleteItemFromStart()
{
    node *t;
        if (start ==NULL)
            cout<<"empty list"<<endl;
            return 0;
        else
        t=start;
        start= start->next;
        delete(t);
        return(1);
}

int LinkedListADT::deleteItemFromLast()
{
    node *t1,t1;
        if (start ==NULL)
            cout<<"empty list"<<endl;
            return 0;
        if (start->next ==NULL){
            delete(start);
            start=NULL;
            return 1;
        }
        t1,t2=start;
        do{
            t2=t1;
            t1=t1->next;
          } while(t1->next != NULL);

        t2->next=NULL;
        delete(t);
        return(1);
}

int LinkedListADT::deleteCurrentItem(int currentData)
{
    node *t = Search(currentData);
    if (t==NULL)
    {
        cout<<"No such value exists";
        return 0;
    }
    while(t->next != NULL)
    {
        t->item = t->next->item;
        t=t->next;
    }
    deleteItemFromLast();
    return(1);
}

void LinkedListADT::sortList()
{

}

void LinkedListADT::editItem(int currentData,int newData)
{
    node *t = Search(currentData);
    if (t==NULL)
    {
        cout<<"No such value exists";
    }
    else
        t->item = newData;
}

void LinkedListADT::viewList()
{
    if (start==NULL)
    {
       cout<<"Underflow"<<endl;
    }
    node *t;
    t=start;
    while(t->next!=NULL)
    {
        cout<<t->item<<" ";
        t=t->next;
    }
}

int LinkedListADT::getFirstItem()
{
   if (start==NULL)
   {
       cout<<"Underflow"<<endl;
       return (-1);
    }
    else
        return(start->next);
}

int LinkedListADT::getLastItem()
{
    if (start==NULL)
   {
       cout<<"Underflow"<<endl;
       return (-1);
    }
   node *t;
    t=start;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    return(t->item);
}

int main()
{
    return 0;
}
