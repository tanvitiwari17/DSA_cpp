#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int palinArray(int arr[], int n)
{
    for(int i=0;i<n;i++){
        int ans = 0;
        int temp = arr[i];

        while(temp>0){
            int r = temp%10;
            temp/=10;
            ans = (ans*10)+r;
        }
        if(ans!=arr[i])
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout<<"n: ";cin>>n;
    int arr[n];
    cout<<"array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"ans-1/0: "<<palinArray(arr,n);
    return 0;
}
