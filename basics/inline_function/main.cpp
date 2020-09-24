/*
Function is time consuming. Every time a function is called,
it takes lot of extra time in executing a series of instructions for tasks.

So , when function is small it i worthless to spend so much extra time in such tasks
in cost of saving comparatively small space.
*/

/*
To eliminate the cost of calls to small functions, we use inline function.
Inline function is a function that is expanded in line when it is invoked.
Compiler replaces the function call with the corresponding function code.
Compiler however, may ignore the request of inline in some situations:
- function containing loops,switch,goto
- functions with recursion
- containing static variable.
*/

#include <iostream>

using namespace std;

inline void fun(); // declaration, inline keyword is written in declaration and not in definition
int main()
{
    cout << "you are in main!" << endl;
    fun();
}
void fun()
{
    cout<<"you are in fun!";
}
