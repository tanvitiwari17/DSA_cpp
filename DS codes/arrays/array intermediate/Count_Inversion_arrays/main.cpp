#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int countInversion(int a[],int n)
{
    int inv=0;
    for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            inv++;
        }
    }
}
return inv;
}
int main()
{
    int n;
    cout<<"Enter n:";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Count Inversion is : "<<countInversion(arr,n);
    return 0;
}
