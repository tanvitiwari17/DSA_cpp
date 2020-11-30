#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout<<"t: ";cin>>t;
    while(t--){
        int n;
        cout<<"n:";cin>>n;
        int a[n];
        cout<<"array:";
           for(int i=0;i<n;i++)
            cin>>a[i];
        int m;
        cout<<"m: ";
        cin>>m;

        sort(a,a+n);
        int mini =INT_MAX;
        for(int i=0;i+m-1<n;i++)
        {
            int d = a[i+m-1]-a[i];

            if(d<mini)
                mini=d;
        }
        cout<<"Ans: "<<mini<<endl;
    }
    return 0;
}
