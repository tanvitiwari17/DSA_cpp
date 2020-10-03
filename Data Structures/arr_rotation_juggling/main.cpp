/*
using juggling rotation for rotating an array
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//get gcd
int gcd(int a,int b)

{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

void LeftRotate(int arr[],int n,int d)
{
    // to handle if d>=n:
    d=d%n;
    int g_c_d=gcd(d,n);
    for(int i=0;i<g_c_d;i++){
        int temp =arr[i];
        int j =i;

        while(1){
            int k = j+d;
            if(k>=n)
                k=k-n;
            if(k==i)
                break;
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int n= sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    LeftRotate(arr,n,3);
    display(arr,n);
    return 0;
}
