#include <iostream>

using namespace std;

int main()
{
    int a,b,sum=0;
    cout << "Enter range!" << endl;
    cout<<"From: ";
    cin>>a;
    cout<<"To: ";
    cin>>b;
    for (int i=a;i<=b;i++)
        sum+=i;
    cout<<"Sum: "<<sum;
    return 0;
}
