/*
Early binding: compiler's responsibility to bind the correct version of method with the call.

Method overloading
Method Overriding
Method Hiding

Method overloading:
all versions of a function must exist in one class
Method overriding:
both child and parent class have same function name with same arguments, same prototype
Method Hiding:
both child and parent class have same function name, but different arguments
*/
#include<iostream>
using namespace std;

class A
{
public:
void f1(){
    cout<<"f1 function of A"<<endl;
}
void f2(){
    cout<<"f2 function of A"<<endl;
}
};
class B:public A
{
public:
void f1(){
    cout<<"f1 function of B"<<endl;
}         // Method overriding
void f2(int x){
    cout<<"f2 function of B, x= "<<x<<endl;
}    // Method Hiding
};

int main()
{
B obj;
obj.f1(); // binds with method of class B
//obj.f2(); // gives error, since function with same name exits in class B (but with different arguments), so it won't check class A
obj.f2(4); // class B function
obj.A::f1();//calls class A function
 return 0;
}
