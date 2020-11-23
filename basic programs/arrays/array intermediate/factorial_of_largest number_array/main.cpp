#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;


int fact(int n)
{
    int fac=1;
    for (int i=n;i>0;i--)
    {
        fac=fac*i;
    }
    return fac;

}
int main()
{
    int test_cases;
    cout<<"Number of test cases: ";
    cin>>test_cases;
    for (int i=0;i<test_cases;i++)
    {
        int num;
        cout<<"num: ";
        cin>>num;
        cout<<"factorial of "<<num<<" is : "<<fact(num)<<endl;
    }
    return 0;
}
