#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void threewaypartitioning(int arr[],int n,int a,int b)
{
    int l=0;
    int r=n-1;

    for(int i=0;i<=r;i++)
    {
        if(arr[i]<a)
        {
            swap(arr[i],arr[l]);
            l++;
        }
        else if (arr[i]>b)
        {
            swap(arr[i],arr[r]);
            r--;
            i--;
        }
    }

}
int main()
{
    int t;
    cout<<"t: ";cin>>t;
    while(t--){
    int n ;
    cout<<"n: ";cin>>n;
    int arr[n];
    cout<<"array:";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int a,b;
    cout<<"a:";cin>>a;
    cout<<"\nb:";cin>>b;

    int k1=0,k2=0,k3=0;
    int kk1=0;int kk2=0;int kk3=0;

        for(int i=0; i<n; i++)
        {
            if(arr[i]>b)
                k3++;
            else if(arr[i]<=b and arr[i]>=a)
                k2++;
            else if(arr[i]<b)
                k1++;
        }

        threewaypartitioning(arr,n,a,b);
        for(int i=0;i<k1;i++)
        {
            if(arr[i]<b)
            kk1++;
        }

        for(int i=k1;i<k1+k2;i++)
        {
            if(arr[i]<=b and arr[i]>=a)
            kk2++;

        }
        for(int i=k1+k2;i<k1+k2+k3;i++)
        {
            if(arr[i]>b)
            kk3++;
        }
        bool ok = 0;
        if(k1==kk1 and k2 ==kk2 and k3 == kk3)
            ok = 1;
                if(ok)
            cout<<1<<endl;
        else
            cout<<0<<endl;
}
return 0;
}
