/*

Given an array of integers, find the length of the longest sub-sequence
such that elements in the subsequence are consecutive integers,
the consecutive numbers can be in any order.

TC=O(nlogn) SC=O(1)
*/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int longest_conseq_subseq(int arr[],int n)
{
    int ans=0,counter=0;
    sort(arr,arr+n);

    vector<int> v;
    v.push_back(arr[0]);

    for (int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
            v.push_back(arr[i]);
    }

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[i-1]+1)
            counter++;
        else
            counter=1;
        ans=max(ans,counter);
    }
    return ans;

}
int main()
{
    int arr[]={1,2,3,14,15,4,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The length of the longest contiguous subsequences is : "<<longest_conseq_subseq(arr,n);
    return 0;
}
