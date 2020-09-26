/*

Constructor is a member function of a class.
constructor name is same as class name.
No return type.
It can never be static.

It is invoked implicitly when an object is creates
It solves the problem of initialization.

Problem of initialization: when an object is created, the values stored in it are garbage values.
therefore constructor overcomes this problem by providing initial values instead of garbage.


    constructors:
 - default constructor
 - parameterized constructor
 - constructor overloading

 if more than one type of constructor is present in a class : constructor overloading

 If there are no constructors in a class, then compiler creates two constructors on its own-
 ~ default constructor, if any constructor is created, compiler does not create default constructor
 ~ copy constructor
 */

#include <iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    Complex() // default constructor
    { }

    Complex(int x,int y) // parameterized constructor
    {  a=x;
       b=y;
    }

    Complex(int k) // parameterized constructor
    {  a=k;}

    Complex(Complex &c) // copy constructor  // Complex(Complex c) gives error because we are creating an object c, and thus cause recursion
    {  a = c.a;
       b = c.b;
    }

};

int main()
{
    Complex c1;
    Complex c2(3,4);// other way of writing : Complex c1=Complex(3,4)
    Complex c3(5); // other way of writing : Complex c3 =5;
    Complex c4=c2; //or c4(c2)
    return 0;
}
