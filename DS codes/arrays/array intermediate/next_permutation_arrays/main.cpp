/*
approaches:
1. Brute Force:-
    TC -- O(N!)
    SC -- O(N)
2. Single Pass Approach
    TC -- O(N)
    SC -- O(1)


single pass approach->
*/

#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

void nextPermutation(vector<int>& arr, int n)
{
    int idx = -1;
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            idx=i;
            break;
        }
    }

    if (idx == -1)
    {
        reverse(arr.begin(),arr.end());
    }
    else{
        int prev = idx;
        for(int i=idx+1;i<n;i++){
            if (arr[i] > arr[idx-1] and arr[i]<=arr[prev])
            {
                prev =i;
            }
        }
        swap(arr[idx-1],arr[prev]) ;
        reverse(arr.begin()+idx, arr.end());
    }
}
int main()
{
    vector<int> arr ={1,5,8,4,7,6,5,3,1};
    int n = arr.size();
    cout<<"Original : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\nNext Permutation: ";
    nextPermutation(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
