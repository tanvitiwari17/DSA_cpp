/*
Initializer list is used to initiate data members of a class.
A list of members to be initialized is indicated with constructor as a comma separated list followed by a colon.

constant variables cannot be changed throughout the program and needs to be initialized during declaration itself.
but we cannot initialize variables during declaration inside a class in cpp.
in such cases initializers are used.
same is the case of reference variable
in other words,

There are situations where initialization of data members inside constructor doesn't work and initializer list must be used-
- for initialization of non-static const data members
- for initialization of reference members
*/

#include <iostream>
using namespace std;

class Dummy
{
private:
    int a,b;
    const int x; // constant variable, cannot be changed
    int &y;
public:
    Dummy(int &n):x(5),y(n)
    {  a=10;
    b=12;
    }
   void Show()
    {
        cout<<a<<" "<<b<<" " <<x<<" "<<y;
    }
};
int main()
{
    int m=6;
    Dummy d1(m);
    d1.Show();
    return 0;
}
