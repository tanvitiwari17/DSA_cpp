#include <bits/stdc++.h>
using namespace std;

//reversing
void rev_arr(int arr[],int start,int last)
{
    if (start >= last)
    return;

    int temp = arr[start];
    arr[start] = arr[last];
    arr[last] = temp;

    rev_arr(arr, start+1, last-1);
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int i,n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements: "<<endl;
    for (i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Original Array: ";
    display(arr,n);
    rev_arr(arr,0,n-1);
    cout<<"\nReversed Array: ";
    display(arr,n);
    return 0;
}



