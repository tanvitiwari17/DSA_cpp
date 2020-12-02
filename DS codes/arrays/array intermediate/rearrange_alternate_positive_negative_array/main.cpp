#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rearrange_alternate(int a[],int n)
{
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]<0 and a[j]>0){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else if(a[i]>0 and a[j]<0){
            i++;
            j--;
        }
        else if(a[i]>0){
            i++;
        }
        else if(a[j]<0){
            j--;
        }
    }
        if(i==0 or i==n)
        {
            for(int m=0;m<n;m++)
                cout<<a[m]<<" ";
                cout<<endl;
        }
        else
        {
            int k=0;
            while(k<n and i<n)
            {
                swap(a[k],a[i]);
                k=k+2;
                i++;
            }
            for(int m=0;m<n;m++)
                cout<<a[m]<<" ";
                cout<<endl;
        }

}

void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Elements:";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"original Array: ";
    display(arr,n);
    cout<<"\nAfter Rearranging: ";
    rearrange_alternate(arr,n);

    return 0;
}


