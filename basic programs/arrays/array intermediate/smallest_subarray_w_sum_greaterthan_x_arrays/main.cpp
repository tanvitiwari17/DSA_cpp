#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout<<"t: ";cin>>t;
    while(t--){
        int n,x;
        cout<<"n: ";cin>>n;
        cout<<"x: ";cin>>x;
        int a[n];
        cout<<"array:";
        for(int i=0;i<n;i++)
            cin>>a[i];

        int mi = INT_MAX;
        int i=0,j=0;
        int s =0;
        while(i<=j and j<n){
                while(s<=x and j<n){
            s+=a[j++];
        }
        while(s>x and i<j){
            mi=min(mi,j-i);
            s-=a[i];
            i++;
        }
    }
    cout<<"length of smallest subarray with sum greater than " <<x <<" is :"<<mi<<endl;
    }
    return 0;
}
