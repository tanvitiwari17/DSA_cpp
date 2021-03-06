#include <iostream>
using namespace std;

// Move Zeros
void MoveZeros(int arr[],int n)
{
    int Count=0;
    for (int i =0;i<n;i++)
        if (arr[i]!=0)
    {
        swap(arr[i],arr[Count]);
        Count++;
    }
}

//reversing an array
void Reverse(int arr[],int n)
{
int low=0,high=n-1;
while(low<high)
{
    int temp = arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    low++;
    high--;
}
}
// left rotate array by one
void LeftRotateOne(int arr[],int n)
{
    int temp=arr[0];
    for (int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void LeftRotation(int arr[],int n,int d) // d: rotate by d
{
    for (int i =0;i<d;i++)
        LeftRotateOne(arr,n);
}

// prefix sum of the array (cumulative, L->R)
void FillPrefixSum(int arr[],int n,int PrefixSum[])
{
    PrefixSum[0] = arr[0];
    for (int i=1;i<n;i++)
        PrefixSum[i]=PrefixSum[i-1]+arr[i];
}

void display(int arr[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={1,2,0,4,0,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int PrefixSum[n];
    display(arr,n);
    cout<<endl;
    Reverse(arr,n);
    display(arr,n);
    cout<<endl;
    MoveZeros(arr,n);
    display(arr,n);
    cout<<endl;
    LeftRotateOne(arr,n);
    display(arr,n);
    cout<<endl;
    LeftRotation(arr,n,3);
    display(arr,n);
    cout<<endl;
    FillPrefixSum(arr,n,PrefixSum);
    for (int i=0;i<n;i++)
    {
        cout<<PrefixSum[i]<<" ";
    }


    return 0;
}
