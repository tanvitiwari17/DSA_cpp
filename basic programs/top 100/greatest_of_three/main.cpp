#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"First Number: ";
    cin>>a;
    cout<<"Second Number: ";
    cin>>b;
    cout<<"Third Number: ";
    cin>>c;
    if (a>=b and a>=c)
        cout<<a<<" is the greatest number!";
    else if (b>=a and b>=c)
        cout<<b<<" is the greatest number!";
    else
        cout<<c<<" is the greatest number!";
    return 0;
}
