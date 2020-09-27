/*
-When an operator is overloaded with multiple jobs, it is known as operator overloading.
-It is a way to implement compile time polymorphism.
-Operator overloading is done because the existing operators only work on the primitive operands( int, float , etc),
-for an operator to work on non primitive operands, we create a function to overload an operator by typing the keyword 'operator' before it.
-We can only overload the already existing operators of cpp.
- we cannot overload 'sizeof' and '?:' operator.


binary operators ( like +) requires 2 operands.
unary operators require just one operand.

 */

#include <iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    void set_data(int x, int y)
        {   a=x; b=y; }
    void show_data()
    {  cout<<"\na="<<a<<" b="<<b; }

    Complex operator +(Complex c) // new definition of + operator
    {
        Complex temp;
        temp.a = a+c.a;
        temp.b = b+c.b;
        return(temp);
    }

    Complex operator -()
    {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return(temp);
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(5,6);
    // c3 = c1+c2 without operator overloading is incorrect , since + works on primitive operands and we're using non primitive operands
    // once we overload the + operator we can use the following statement to get the result.
    c3 = c1+c2; // can also be written as c3=c1.operator+(c2)
    c3.show_data();

    c2=-c1; //c2=c1.operator-(); // unary operator
    c2.show_data();
return 0;
}
