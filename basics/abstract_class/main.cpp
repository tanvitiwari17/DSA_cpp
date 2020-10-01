/*
-Pure virtual function - a do nothing function, i.e no definition
if we create a do nothing function, then it must not be called, so we cannot create an object for that class,
but if another class inherits that class, then it is compulsory for the child class to override that function.

-Abstract Class : A class which containing at least one pure virtual function.
we cannot instantiate abstract class, i.e , object can not be created.
such class can only be used by creating its child class.

why abstract class?
- for generalization
- just to provide common features of child classes

*/

#include <iostream>
using namespace std;
class Person
{
public:
    virtual void fun()=0; // pure virtual function,i,e, do nothing function, no definition inside or outside class
    void f1()
    {
        cout<<"function of abstract class"<<endl;
    }
};
class Student: public Person
{
public:
    void fun()
    {
        cout<<"this is a function\n";
    }
};
int main()
{
    // Person p1; gives an error
    Student s1;
    s1.fun();
    s1.f1();
    return 0;
}
