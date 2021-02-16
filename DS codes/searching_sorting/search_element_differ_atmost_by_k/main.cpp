#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    int arr[n];
    cout<<"arr:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int x,k;
    cout<<"x,k:";
    cin>>x>>k;
    int ans=-1;
    int i=0;
    while(i<n){
        if(arr[i]==x){
            ans=i;
        break;}

    i=i + max(1,abs(arr[i]-x)/k);
    }
    cout<<"ans="<<ans;
    return 0;
}
