#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Coinchange(int s[],int m,int n){
long long int dp[m+1][n+1];
for (int i=0;i<=m;i++)
    dp[i][0]=1;
for(int i=1;i<=n;i++)
    dp[0][i]=0;
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        dp[i][j]=dp[i-1][j];
        if(j-s[i-1]>=0)
        {
            dp[i][j]+=dp[i][j-s[i-1]];
        }
    }
}
    return dp[m][n];
}
int main()
{
    int n,m;
    cout<<"sum,n:";cin>>n;
    cout<<"number of coins,m:";cin>>m;
    int arr[m];
    cout<<"Enter arr:";
    for(int i =0;i<m;i++){
        cin>>arr[i];
    }
    cout<<"count="<<Coinchange(arr,m,n);
    return 0;
}
