#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectsort(int arr[], int n)
{
    int i,j;
    for (i=0;i<n-1;i++)
    {
        int min_index=i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[min_index])
            min_index=j;
        swap(arr[min_index],arr[i]);
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
    selectsort(arr,n);
    cout<<"sorted array:"<<endl;
    printarr(arr,n);
    return 0;
}
