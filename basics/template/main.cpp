/*

Template: is a keyword , used to define function template and class template.
          it is a way to make your function or class generalize as far as data type is concern.

-Function Template (aka generic function)
 if we have to overload functions just to change data types, then,
 then, we instead of creating multiple functions, we create a generalized template.

-Class Template

*/

#include <iostream>
using namespace std;

/*template <class T>  // template <class placeholder1,class placeholder2...>

T big (T a, T b)    // placeholder takes data types accordingly
{                   //both are of same data type

    if (a>b)
        return (a);
    else
        return (b);
}*/

template <class T,class S>
T big (T a, S b)    // numbers of different data type
{

    if (a>b)
        return (a);
    else
        return (b);
}
int main()
{
    cout<<big(4,5)<<endl;
    cout<<big(7.6,2.4)<<endl;
    cout<<big(6.6,9);
    return 0;
}
