/*
~Friend function is not a member function of a class to which it is a friend.
~It is declared in the class with 'friend' keyword, and defined outside the class to which it is friend.
~It can access any member of the class(private/public) to which it is a friend.
but it cannot access members of the class directly.
~It has no caller object.
~it should not be defined with membership label.
~ can be declared in public or private, doesn't matter
~ can be friend to more than one class.
~ Member function of one class can be a friend to another class.
*/

#include <iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    void set_data(int x, int y)
    {
        a=x; b=y;
    }
    void show_data()
    {
        cout<<"\na="<<a<<" b="<<b;
    }
    friend void fun(Complex);
};
void fun(Complex c) // friend keyword is not used again , and we don't use resolution operator since it is not a member function
{
    // cout<<"sum is "<< a+b  incorrect, cannot access directly.
    cout <<" sum is "<<c.a+c.b;
}

int main()

{   Complex c1;
    //c1.fun(); is wrong since friend function has no caller object
    fun(c1);

    return 0;
}
