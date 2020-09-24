/*

function overloading : to implement polymorphism.
|- means one than one function with similar meaning having same name ;
one function name overloaded with different jobs .

methods to implement polymorphism:
- function overloading
- operator overloading
- virtual function


the compiler (at compile time) should bind the correct version/definition of the function with the function call: Early Binding
rule 1 : exact matching (on basis of number of arguments)
rule 2 : type promotion :  char, unsigned char, and short is promoted to int and float promoted to double, if version matches,bind it.
rule 3 : standard/type conversion
otherwise, error.

*/


#include <iostream>

using namespace std;

int area(int, int);
float area(int);

int main()
{
    int r;
    cout << "Enter radius of a circle:" ;
    cin>>r;

    float A = area(r);
    cout<<"Area of the circle is : " <<A<<endl;
    int l,b,a;
    cout<<  "Enter length and breadth of rectangle:";
    cin>>l>>b;
    a=area(l,b);
    cout<<"Area of the rectangle is : "<<a;

}

float area(int R)
{
    return(3.14*R*R);
}

int area(int L,int B)
{
    return(L*B);
}
