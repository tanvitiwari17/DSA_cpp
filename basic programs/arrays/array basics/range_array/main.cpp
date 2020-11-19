#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for (int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nMaximum Element :" << *max_element(arr,arr+n);
    cout<<"\nMinimum Element :"<<*min_element(arr,arr+n);

    cout<<"\nRange of the array: "<<(*max_element(arr,arr+n)-*min_element(arr,arr+n));

    return 0;
}
