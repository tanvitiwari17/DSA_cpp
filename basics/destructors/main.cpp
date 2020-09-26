/*

Destructor is an instance member function of a class.
Name of destructor is same as the class name but preceded by '~' symbol.
Can never be static.
has no return type.
takes no argument, i,e, no overloading is possible.
if we do not create a destructor, compiler creates  one itself.

it is invoked implicitly when object is going to destroy
it is defined to release resources allocated to an object.

*/

#include <iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    ~Complex()
    { cout<<"Destructor";
    }
};
void fun()
{
    Complex obj;
}

int main()
{
    fun();
    //destructor is called here, after the work of function fun is completed.
    return 0;
}
