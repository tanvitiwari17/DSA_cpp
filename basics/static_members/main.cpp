#include <iostream>
using namespace std;

void fun()
{

    static int x;
    int y; // not a static variable, garbage value is stored by default
    /*
    x: by default value will be 0 and not garbage value
    lifetime of x: throughout the program.
    y : memory is allocated once the function is called. Memory is destroyed once the function's work is done.
    x : memory is allocated at the start of the program. Memory is destroyed after the program ends.
    y : memory is allocated and deallocated on every function call
    x : memory is allocated once, for the whole program
    only one copy of static member variable for whole class.
    Any object can use the same copy of class variable.
    static member function can only access static members, since they can be called w/o creating an object
    */
}
class Account
{
private:
    int balance;        // instance member variable
    static float roi;   // static member variable ( aka class variable), does not belong to instance
    // declaration inside the class, definition outside the class
public:
        void setBalance(int b)
        {
            balance = b;
        }
        static void setRoi(float r) // static member function
        {
             roi = r;
        }

};

float Account :: roi=3.5f; // initial value here 3.5, default value =0; class variable is allocated memory only if we define and declare it since it does not depend on object.

int main()
{
 Account a1,a2; // consists of just balance , roi is not the part of a the object.
 // roi exists even if no object is created
/*
if roi would have been a public member variable,
we could've accessed it using:
    Account :: roi =4.5;
if the word static was not written in member fnction, then we require an object to call the static variable like:- a1.setRoi(4.5f);
*/
Account :: setRoi(4.5f); // callable w/o object
}
