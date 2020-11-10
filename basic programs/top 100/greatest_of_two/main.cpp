#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"First Number: ";
    cin>>a;
    cout<<"Second Number: ";
    cin>>b;
    if (a>=b)
        cout<<a<<" is greater than "<<b;
    else
        cout<<b<<" is greater than "<<a;

    return 0;
}
