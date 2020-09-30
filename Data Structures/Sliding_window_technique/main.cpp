#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// finding the maximum sum from the sum of different windows in an array

int MaxSum(int arr[],int n, int k) // k is the size of the window
{
    int max_sum = INT_MIN;
    for (int i=0;i<n-k+1;i++)
    {
        int current_sum=0;
        for(int j=0;j<k;j++)
            current_sum=current_sum+arr[i+j];
        max_sum =max(current_sum,max_sum);
    }
    return max_sum;
}
void display(int arr[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[]= {2,3,1,4,6,7,4};
    int k=4;
    int n= sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    cout<<MaxSum(arr,n,k);
    return 0;
}
