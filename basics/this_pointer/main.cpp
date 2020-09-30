/*
Object Pointer : A pointer that contains address of an object is called Object pointer.
This Pointer : 'this' is a local object pointer in every instance member function containing address of the caller object.
             : this pointer can not be modified
             : it is used to refer caller object in member function
*/

#include <iostream>
using namespace std;

class Box
{
private:
    int l,b,h;
public:
    void set_dim(int l, int b,int h) // the names of local variables clash with instance variables
    {
       // l=l;b=b;h=h; this gives garbage value, to avoid such problem, we use this pointer
       this->l = l; this->b=b; this->h = h;
    }
    void show_dim()
    {
        cout<<"\nl="<<l<<" b="<<b<<" h="<<h;
    }
};
int main()
{
    Box *p,b1; // object pointer p
    p=&b1;  // object pointer p of Box type stores address of caller object b1 of Box type
    //b1.set_dim(12,10,5);
    //b1.show_dim();
    p->set_dim(12,10,5); //points to dims of b1
    p->show_dim();


    return 0;
}
