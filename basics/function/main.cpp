#include <iostream>

using namespace std;
//function declaration is also called function prototype.
//void fun(); if declared here : outside main function, global declaration, now the fun fn can be called anywhere by anyone.

int sum(int, int ); // pv: int sum (int* , int *)  // rv: int sum( int &, int &)
// int sum(int, int, int=0) : example of default arguments where 3 parameters are passed, andif we pass 2 parameters while calling, the third parameter would be considered 0 , and no error is seen.
int main()
{
    void fun();
    // function declaration :inside main function, also called local declaration, therefore, only main funcn is allowed to call fun funcn.
    int a=5,b=6;
    int s=sum(a,b); //pv: s = sum(&a,&b) // rv: sum(a,b)
    cout<<"sum of " <<a<<" and " <<b <<" is = "<<s<<endl; // a and b are actual arguments

    cout<<"you are in main."<<endl;
    fun(); // function call
}

void fun() // function definition
{
    cout<<"you are in fun."<<endl;
}

int sum(int x,int y) // x and y are formal arguments
// pv: int sum (int *p, int *q) // rv: int sum(int &x,int &y)
{
    return (x+y);   //pv:  return (*p+*q); // rv: return(x+y)
}

/* formal arguments are of three types:
    - ordinary variables of any type   : when formal args are ordinary variables,: call by value function
    - pointer variables                : when formal args are pointer variables, : call by address function
    - reference variable               : when formal agrs are reference variable, : call by reference function
*/
