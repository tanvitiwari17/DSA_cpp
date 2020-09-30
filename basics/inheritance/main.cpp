/*
~ Inheritance the process of inheriting properties and behaviors of existing class into a new class.
~ Existing class is also known as 'old class' or 'parent class' or 'base class'.
~ New class is called 'child class' or 'derived class'.

Types:
~Single Inheritance
~Multilevel Inheritance
~Multiple Inheritance
~Hierarchical Inheritance
~Hybrid Inheritance
Syntax:
class base_class
{};
class derived_class : visibility_mode(by default private)  base_class
{};

1. single inheritance
class A{};
class B: public A
{};

2.Multilevel inheritance
class A{};
class B: public A{};
class C: public B{};

3.Multiple inheritance
class A1{};
class A2{};
class B: public A1,public A2{};

4. Hierarchical inheritance
class A{};
class B1:public A{};
class B2: public A{};

Visibility Modes:
-Private -Protected -Public
Types of users:
User 1: create object of class
User 2 : derived class from the class

private members available to both, accessible by none.
protected members available to both, accessed by user 2 but not user 1.
public members, available to both, accessible to both.

visibility mode as:
class A{};
class B : x A{};
x:-
private: all protected/public members of A become private members in B.
protected: all protected/public members of A become protected members in B.
public: protected members and public members of A become protected and public members of B respectively.

'is a' relationship , between parent class and child class, for eg, Banana(derived class) is a fruit(base class)
this is called Association.
-Aggregation
-Composition
-Inheritance

*/

#include<stdio.h>
using namespace std;
class A
{
private:
    int a;
protected:
    void setValue(int k)
    {
        a=k;
    }
};
class B: public A
{
public:
    void setData(int x)
    {
        setValue(x);
    }
};
int main()
{
    B obj;
    obj.setData(4);
    //obj.setValue(4); gives error, since protected member
    return 0;
}
