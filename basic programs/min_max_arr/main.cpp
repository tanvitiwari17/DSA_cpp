#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements: "<<endl;
    for (i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Maximum Element :" << *max_element(arr,arr+n);
    cout<<"\nMinimum Element :"<<*min_element(arr,arr+n);
    return 0;
}
