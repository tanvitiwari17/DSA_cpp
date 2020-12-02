#include <iostream>

using namespace std;

void rotate_arr_by_1(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1 ;i>0;i--)
        {arr[i]=arr[i-1];}
    arr[0]=temp;
    }
void display(int arr[],int n)
{
    for(int i =0;i<n;i++)
        cout<<arr[i]<" ";
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original: ";
    display(arr,n);
    rotate_arr_by_1(arr,n);
    cout<<"\nRotated by 1: ";
    display(arr,n);
    return 0;
}
