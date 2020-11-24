/*
Find the minimum element in a sorted and rotated array
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int min_ele_search(int arr[],int low,int high)
{
    while(low<high)
    {
        int mid = low +(high-low)/2;
        if (arr[mid]==arr[high])
            high--;
        else if (arr[mid]>arr[high])
            low=mid+1;
        else
            high=mid;
    }
    return arr[high];
}
int main()
{
    int arr[]={5,6,1,2,3,4};
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<"The minimum element is "<< min_ele_search(arr,0,n-1);
    return 0;
}
