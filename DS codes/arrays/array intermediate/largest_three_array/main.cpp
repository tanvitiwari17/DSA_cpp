/*
.Given an array with all distinct elements,
find the largest three elements.
Expected time complexity is	O(n) and extra space is	O(1).
*/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void largest3(int arr[],int n)
{
    int first,second,third;
    if (n<3)
        {cout<<"Invalid Input";
        return;
        }

    first=second=third= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if (arr[i]>first)
        {
            third=second;
            second=first;
            first = arr[i];
        }
        else if(arr[i]>second)
        {
            third=second;
            second=arr[i];
        }
        else if (arr[i]>third)
        {
            third=arr[i];
        }
    }
    cout<<"Three largest numbers are: ";
    cout<<"\nFirst : "<<first;
    cout<<"\nSecond: "<<second;
    cout<<"\nThird : "<<third;
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    cout<<"Elements: ";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    largest3(arr,n);
    return 0;
}
