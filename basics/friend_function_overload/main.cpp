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
        cout<<"\na="<<a<<" b="<<b<<endl;
    }
    friend Complex operator+(Complex,Complex); // binary operator
    friend Complex operator-(Complex); // unary operator
    friend ostream& operator<<(ostream&, Complex); // reference of ostream, since we cannot make an object
    friend istream& operator>>(istream&, Complex&); // reference of complex too since we need actual arguments to change
};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a = X.a+Y.a;
    temp.b = X.b+Y.b;
    return (temp);
}
Complex operator -(Complex C)
{
    Complex temp;
    temp.a = -C.a;
    temp.b = -C.b;
    return (temp);
}
ostream& operator<<(ostream &dout, Complex C)
{
    cout<<endl<<"a="<<C.a<<" b="<<C.b;
    return (dout); //return(cout)  // done for cascading
}
istream& operator>>(istream &din, Complex &C)
{
    cin>>C.a>>C.b;
    return(din);
}
int main()

{   Complex c1,c2,c3,c4;
    Complex c5;
    c1.set_data(3,4);
    c2.set_data(7,9);
    c3=c1+c2; //c3=operator+(c1,c2);
    c4=-c1; // c4=operator-(c1);
    c3.show_data();
    c4.show_data();
    cout<<"enter a complex number: ";
    cin>>c5;
    cout<<endl<<"you entered: ";
    cout<<c5;
    return 0;
}
