/*
for a member function of one class be friend of another:

class A
{
public:
    void fun()
    {   ...    }
    void foo();
    {...}
};
class B
{
friend void A::fun(); // scope resolution operator required
friend void A::foo();
//if all functions of class A are friend to class B, then instead of typing one by one,
// we can directly type:
// friend class A;
}
*/

#include <iostream>
using namespace std;
class B; // declaring so than friend function in A could recognize 'B'
class A
{
private:
    int a;
public:
    void set_data(int x)
    {
        a=x;
    }
    void friend fun(A,B);
};
class B
{
private:
    int b;
public:
    void set_data(int y)
    {
        b=y;
    }
    void friend fun(A,B);
};
void fun(A obj1,B obj2)
{
    cout<<"sum is: "<<obj1.a+obj2.b;
}
int main()
{
    A ob1;
    B ob2;
    ob1.set_data(5);
    ob2.set_data(7);
    fun(ob1,ob2);
    return 0;
}


