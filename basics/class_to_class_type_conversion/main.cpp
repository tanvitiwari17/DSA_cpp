/*
class type to class type: can be done by either
                        conversion through constructor,or,
                        conversion through casting operator
*/

#include <iostream>
using namespace std;
class Item
{
private:
    int a,b;
public:
    Item(){}
    /* constructor method:
    Item(Product p)
    {
        a=p.getM();
        b=p.getN();
    }*/
    Item(int x,int y)
    {
        a=x;b=y;
    }
    void show_data()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};

class Product
{
private:
    int m,n;
public:
    void set_data(int x,int y)
    {
        m=x; n=y;
    }
    int getM()
    {
        return (m);
    }
    int getN()
    {
        return (n);
    }
    operator Item() // casting operator method
    {
        Item temp(m,n);
        return(temp);
    }
};

int main()
{
    Item i1;
    Product p1;
    p1.set_data(3,4);
    i1=p1;
    i1.show_data();
    return 0;
}
