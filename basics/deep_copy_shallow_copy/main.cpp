/*
copy:
~ shallow copy : creating copy of object by copying data of all member variables as it is.
~ deep copy : creating an object by copying data of another object along with the values of
              memory resources resides outside the object but handled by that object.

we can copy by-
~ copy constructor
    dummy d2;
    d2=d1;
~ default/implicit assignment operator
    dummy d2=d1;
*/

#include <iostream>
using namespace std;

// shallow copy:-

class Dummy
{
private:
    int a,b;
public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"a="<<a<<" b="<<b;
    }
    Dummy(Dummy &d)
    {
    a=d.a; b=d.b;
    }
};
int main()
{
    Dummy d1;
    d1.setData(3,4);
    Dummy d2=d1;   //copy assignment
    d2.showData();
    return 0;
}

/*----------------------------------------------------------------------------------------*/

// deep copy:

class Dummy
{
private:
    int a,b,*p;
public:
    Dummy()
    {
        p= new int;
    }
    void setData(int x,int y,int z)
    {
        a=x;
        b=y;
       *p=z;
    }
    void showData()
    {
        cout<<"a="<<a<<" b="<<b;
    }
    Dummy(Dummy &d)
    {
    a=d.a; b=d.b;
    p=new int; // creates a new memory pointer resource , otherwise, p=d.p would have pointed to the same memory resource
    *p = *(d.p);
    }
    ~Dummy(){
    delete p;
    }
    // if it was shallow copy, then both the pointers would've pointed to same memory resource and deletion of any object must have resulted in deletion of that resource,
    // the pointer of the remaining object still points to that invalid resource. such pointers are called dangling pointers.
};
int main()
{
    Dummy d1;
    d1.setData(3,4,5);
    Dummy d2=d1;   //copy assignment
    d2.showData();
    return 0;
}

