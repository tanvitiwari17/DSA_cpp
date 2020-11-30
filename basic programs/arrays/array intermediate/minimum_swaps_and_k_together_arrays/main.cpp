#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout<<"t:";cin>>t;
    while(t--){
        int n;
        cout<<"n:";cin>>n;
        int arr[n];
        cout<<"array:";
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int k;
        cout<<"k:";cin>>k;

        int good=0;
        for(int i=0;i<n;i++){
            if (arr[i]<=k) good++;
        }
        int mi = INT_MAX;
        int bad =0;
        for(int i=0;i<good;i++){
            if (arr[i]>k) bad++;
        }
        int i=0, j=good-1;
        while(j<n){
            mi = min(mi,bad);
            j++;
            if(j<n and arr[j]>k) bad++;
            if(arr[i]>k) bad--;
            i++;
        }
        if(mi==INT_MAX) cout<<"0\n";
        else
            cout<<"minimum swaps: "<<mi<<endl;
    }
    return 0;
}
