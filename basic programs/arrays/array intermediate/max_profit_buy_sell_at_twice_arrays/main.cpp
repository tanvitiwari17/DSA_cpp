/*  TC=O(n), SC=O(n) */

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxProfit(int arr[],int n)
{
    int dp[n];
    for(int i=0;i<n;i++)
        dp[i]=0;
    int ma = arr[n-1];
    int mi = arr[0];

    for(int i =n-2;i>=0;i--){
        if(arr[i]>ma)
            ma = arr[i];
        dp[i] = max(dp[i+1],ma-arr[i]);
    }

    for(int i=1;i<n;i++){
        if(arr[i]<mi)
            mi = arr[i];
        dp[i] = max(dp[i-1],dp[i]+(arr[i]-mi));
    }
    return dp[n-1];
}
int main()
{
    int arr[]={3,5,0,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum profit will be : Rs."<<maxProfit(arr,n);
    return 0;
}
