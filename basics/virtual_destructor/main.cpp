/*

if a class has a pointer, which is pointing to a memory resource is destroyed, the pointer is destroyed, but the memory location
to which the pointer was pointing still exits and consumes memory, although it cannot be used anymore. this is called memory leak.

To avoid memory leak, we create a release() function inside the destructor which releases the memory location.

*/

#include <iostream>

using namespace std;
class A{
private:
    int a;
public:
    void f1(){}
    virtual ~A(){ // to let compiler know to first bind destructor of child class
    cout<<"destructor A\n";}

};

class B: public A
{
    int b;
public:
    void f2(){}
    ~B(){
    cout<<"destructor B\n";}
};
int main()
{
    A *ptr = new B;
    ptr->f1();
    //p->f2(); is incorrect, cant point to functions that are not in parent class
    delete ptr; // late binding because of virtual keyword
    return 0;
}
