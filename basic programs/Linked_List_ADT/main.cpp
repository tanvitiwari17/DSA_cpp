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
            return(NULL);
        t = start;
        while (t!=NULL){
            if(t->item==data)
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
            deleteItemFromStart();
    }
};

int LinkedListADT::countItems()
{
  int Count = 0;
  if (start==NULL)
    return 0;
  node *t;
  t=start;
  while(t!=NULL)
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

int LinkedListADT::searchItem(int data)
{
    node *t;
    int pos=0;
    t=start;
    while(t!=NULL){
        pos++;
        if (t->item == data)
            return(pos);
        t=t->next;
    }
    return(-1);

}

int LinkedListADT::deleteItemFromStart()
{
    node *t;
        if (start ==NULL){
            cout<<"empty list"<<endl;
            return 0;}
        else
        t=start;
        start= start->next;
        delete(t);
        return(1);
}

int LinkedListADT::deleteItemFromLast()
{
        if (start ==NULL)
            {cout<<"Underflow"<<endl;
            return 0;}
        if (start->next == NULL){
            delete(start);
            start=NULL;
            return 1;
        }
        node *t1,*t2;
        t1,t2=start;
        do{
            t2=t1;
            t1=t1->next;
          } while(t1->next != NULL);

        t2->next=NULL;
        delete(t1);
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
    while(t->next!= NULL)
    {
        t->item = t->next->item;
        t=t->next;
    }
    deleteItemFromLast();
    return(1);
}

void LinkedListADT::sortList()
{
    node *t;
    int r,i,x,n;
    n=countItems();
    for(r=1;r<=n-1;r++)
    {
        t=start;
        for(i=0;i<=n-1-r;i++)
        {
            if(t->item >t->next->item){
                x = t->item;
                t->item = t->next->item;
                t->next->item = x;
            }
            t = t->next;
        }
    }
}

void LinkedListADT::editItem(int currentData,int newData)
{
    node *t = Search(currentData);
    if (t==NULL)
    {
        cout<<"No such value exists"<<endl;
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
    while(t!=NULL)
    {
        cout<<t->item<<" ";
        t=t->next;
    }
        cout<<endl;

}

int LinkedListADT::getFirstItem()
{
   if (start==NULL)
   {
       cout<<"List is empty, ";
       return (-1);
    }
    else
        return(start->item);
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
    LinkedListADT l1;
    cout<<"first item: "<<l1.getFirstItem()<<endl;
    cout<<"count: "<<l1.countItems()<<endl;
    l1.insertAtStart(10);
    l1.insertAtStart(20);
    l1.insertAtStart(30);
    cout<<"count: "<<l1.countItems()<<endl;
    cout<<"first item: "<<l1.getFirstItem()<<endl;
    cout<<"last item: "<<l1.getLastItem()<<endl;
    l1.viewList();
    l1.insertAtLast(40);
    l1.viewList();
    l1.insertAfter(20,5);
    l1.viewList();
    l1.sortList();
    l1.viewList();
    l1.deleteItemFromStart();
    //l1.deleteItemFromLast();
    //l1.deleteCurrentItem(5);
    l1.viewList();
    l1.editItem(10,15);
    l1.viewList();
    cout<<l1.searchItem(20);


    return 0;
}
