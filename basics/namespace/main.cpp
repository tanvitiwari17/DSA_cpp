/*

- namespace is a container for identifiers.
- it puts the names of its members in a distinct space so that they don't conflict
  with the names in other namespaces or global namespace.

namespace Myspace{
// declarations
}
- the namespace definition must be done at global scope, or nested inside another namespace
- we can use alias name for our namespace name for ease:
    namespace ms=MySpace;
- namespace is not a class, therefore no instance
- there can be unnamed namespaces.
- namespaces can be extended, i.e namespace definition can be continued and extended
  over multiple files, they are not redefined or overridden.

to access namespace:
resolution::operator with identifier
*/
#include<iostream>
using namespace std;

namespace Myspace{
int a;
void f1();
class A
{
public:
    void fun1();
};}
void Myspace::f1()
{
    cout<<"F1 function\n";
}
void Myspace::A::fun1()
{
    cout<<"Func1 function\n";
}
using namespace Myspace; //else
int main()
{
    a=5;        // Myspace::a=5
    f1();       // Myspace::f1()
    A obj;      // Myspace::A obj
    obj.fun1(); //obj.sun1()
    return 0;
}
