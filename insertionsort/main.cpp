#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n)
{
    int i,j,key;
    for (i=1;i<n;i++)
    {
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
}
void printarr(int arr[],int size)
{
    int i;
    for (i=0;i<size;i++)
        cout<<arr[i]<<" "<<endl;
}
int main()
{
    int arr[]={2,10,8,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    cout<<"sorted array:"<<endl;
    printarr(arr,n);
    return 0;
}

