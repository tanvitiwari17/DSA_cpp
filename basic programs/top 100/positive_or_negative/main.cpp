#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter Number: ";
    cin>>num;
    cout<<endl;

    if (num==0)
        cout<<"Neither positive nor negative!\n";
    else if (num>0)
        cout<<"The number is positive!";
    else
        cout<<"The number is negative!";

    return 0;
}
