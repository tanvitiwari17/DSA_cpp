/*
The difference between structure and class:
- in structure: members by default: public
- in class: members by default : private

classes require no backward compatibility.
*/

#include <iostream>
using namespace std;

class Complex{

private :
    int a,b;
public :
    void set_data(int x, int y)
    {
        a = x; b=y;
    }
    void show_data()
    {
        cout<<"\na="<<a<<" b="<<b;
    }
    Complex add(Complex c)
    {
     Complex temp;
     temp.a = a+c.a;
     temp.b = b+c.b;
     return (temp);
    }
};

int main()
{

    Complex c1,c2,c3; //c1 is an object of class Compl ex
    c1.set_data(3,4);
    c2.set_data(5,6);
    c3=c1.add(c2);
    c3.show_data();
    return 0;

}

/*

class Complex{

private :
    int a,b;
public :
    void set_data(int,int); // defining outside the function, no more a class member function.
    void show_data()
    {
        cout<<"\na="<<a<<" b="<<b;
    }
};

void Complex:: set_data(int x, int y) // to make it a member function, we write a Membership label. class_name scope resolution operator '::'
    {
        a = x; b=y;
    }

int main()
{

    Complex c1; //c1 is an object of class Compl ex
    c1.set_data(3,4);
    c1.show_data();
    return 0;

}

we can't add the two directly, we need operator overloading for it,
therefore;
c3=c1+c2 is incorrect.

*/
