#include <iostream>

using namespace std;
int power(int x,int y)
{
    if (y==0)
    return 1;
    else
        return(x*power(x,y-1));
}
int main()
{
    int base,raise;
    cout << "Enter base: "; cin>>base;
    cout<<"Enter power: ";cin>>raise;
    cout<<"Answer: "<<power(base,raise);
    return 0;
}
