/*

Base class pointer : it can point to the object of any of its descendant class
its converse is not true.

to let compiler know that we need dynamic/late binding , we use 'virtual' keyword
so now, instead of looking at the type of pointer, it checks the content of pointer

there can be multiple virtual functions

Virtual function working concept:

1. if a class contains at least one virtual function, compiler creates a variable as a member of that class on its own,
   (pointer variable : *_vptr), which is inherited by child class(therefore, compiler does not create it).

2. Compiler also creates a static array called vtable (of function pointers , that contains address of only virtual functions.), in both parent and child class.
    the *_vptr contains the address of vtable
*/

#include <iostream>
using namespace std;

class A
{
public:
    virtual void f1() {
    cout<<"f1 function of A"<<endl;
    }
};
class B: public A
{
public:
    void f1(){
        cout<<"f1 function of B"<<endl;
}
    void f2(){
        cout<<"f2 function of B"<<endl;
}
};
int main()
{
    A *p,o1;
    B o2;
    p=&o2; // pointer of parent class stores address of child
    p->f1(); // this binds A;s function instead of B
    // this is called problem of overriding
    //to avoid this, we do late/dynamic binding( at run time) instead of early binding
    // now it binds with function of class B
    return 0;
}
