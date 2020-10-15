/*

year % 4==0
century year % 400==0

*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter year: ";
    cin>> year;
    if (year % 400 == 0 || year%100!=0 && year % 4 == 0)
        cout<<"Leap Year";
    else
        cout<<"Not a Leap Year";
    return 0;
}
