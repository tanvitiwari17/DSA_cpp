#include <iostream>

using namespace std;

void swapp(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int Partition(int arr[],int low,int high)
{
    int pivot =arr[high];
    int i=(low-1);

    for (int j=low;j<=high-1;j++)
    {
        if (arr[j]< pivot)
        {
            i++;
            swapp(&arr[i],&arr[j]);
        }
    }
    swapp(&arr[i+1],&arr[high]);
    return (i+1);
}
void quicksort(int arr[],int low,int high)
{
    if (low<high)
    {
        int pi=Partition(arr,low,high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}
void display(int arr[],int n)
{

for (int i=0;i<n;i++)
    cout<<arr[i]<< " ";
}
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Original array: ";
    display(arr,n);
    quicksort(arr,0,n-1);
    cout<<"\nSorted array (Quicksort): ";
    display(arr,n);
    return 0;
}
