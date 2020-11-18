#include <iostream>

using namespace std;

void rearrange(int arr[],int n)
{
    int j =0;
    for(int i=0;i<n;i++){
        if (arr[i]<0){
            if(i!=j)
            swap(arr[i],arr[j]);
        j++;
        }
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
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    cout<<"Elements";
    for (int i=0;i<n;i++)
        cin>>arr[i];
        display(arr,n);
    rearrange(arr,n);
    cout<<"\nRearranged:";
    display(arr,n);
    return 0;
}
