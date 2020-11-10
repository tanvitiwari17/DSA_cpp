#include <iostream>

using namespace std;

int main()
{
    int N,sum=0;
    cout << "Enter N: ";
    cin>>N;
    sum=N*(N+1)/2;
    cout<<"Sum of first "<<N<<" natural numbers is: "<<sum;
    return 0;
}
