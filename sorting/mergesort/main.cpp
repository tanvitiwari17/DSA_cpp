#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mergee(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
           {
             cout<<a[i++]<<" ";}
        else{
            cout<<b[j++]<<" ";}
        }
    while (i<m)
    {
        cout<<a[i++]<<" ";}
    while (j<n)
    {
        cout<<b[j++]<<" ";}
}
int main()
{
    int arr1[]={2,3,5,9};
    int arr2[]={1,4,6,7,8};
    int m= sizeof(arr1)/sizeof(arr1[0]);
    int n= sizeof(arr2)/sizeof(arr2[0]);
    mergee(arr1,arr2,m,n);
    return 0;
}
