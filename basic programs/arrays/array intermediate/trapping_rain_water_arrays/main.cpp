#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout<<"t= ";cin>>t;
    while(t--){
    int n;
    cout<<"n: ";
    cin>>n;
    int arr[n];
    cout<<"array:";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int l[n], r[n];
    int ma,mi;
    ma = l[0] = arr[0];
    mi = r[n-1] = arr[n-1];

    for(int i=1;i<n;i++){
        if(arr[i]>ma)
            ma = arr[i];
        l[i] = ma;
    }
    for(int i=n-2; i>=0; i--){
        if(arr[i]>mi)
            mi = arr[i];
        r[i] = mi;
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += min(l[i],r[i]) - arr[i];
    }

    cout << "max water trapped:" << sum<<endl;
    }
    return 0;
}
