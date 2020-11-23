//Find Largest sum contiguous subarray.[Very Important]

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxsubarraysum(int arr[],int n)
{
    int max_so_far=INT_MIN;
    int max_ending_here =0;

    for(int i=0;i<n;i++)
    {
        max_ending_here = max_ending_here+arr[i];
        if(max_so_far<max_ending_here)
            max_so_far=max_ending_here;
        if(max_ending_here<0)
        max_ending_here=0;
    }
    return max_so_far;
}
int main()
{

int arr[]={-2,-3,4,-1,-2,1,5,-1};//{1,2,3,-2,5};
int n = sizeof(arr)/sizeof(arr[0]);
int max_sum=maxsubarraysum(arr,n);
cout<<"Maximum contiguous sum is : "<<max_sum;

return 0;
}

