/*
primitive type: int, char, float double
class type; any defined class

primitive type to primitive type -> automatic conversion
primitive type to class type -> implemented through constructor
class type to primitive type -> implemented with casting operator
*/

#include <iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    Complex(){}
    Complex(int k)
    {
        a=k;b=0;
    }
    void set_data(int x,int y)
    {
        a=x;b=y;
    }
    void show_data()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    operator int() // operator type()
    {
      return(a+b); // return a or return b
    }
};
int main()
{
    Complex c1,c2;
    int y, x=5;
    c1=x;
    c1.show_data();
    c2.set_data(3,4);
    y=c2 ;// y=c2.operator int()
    cout<<"y="<<y;
    return 0;
}
