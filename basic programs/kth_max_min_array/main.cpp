#include <iostream>

using namespace std;
void sort_arr(int arr[],int n){
for (int i=0;i<n-1;i++)
for (int j=0;j<n-1-i;j++)

    if (arr[j]>arr[j+1])
     swap(arr[j],arr[j+1]);


}
void Mini_k(int arr[], int k)
{
    cout<<"Minimum "<<k<<"th number is: "<<arr[k-1];
}

void Max_k(int arr[], int n,int k)
{
    cout<<"Maximum "<<k<<"th number is: "<<arr[n-k];
}

void display(int arr[],int n)
{
    for (int i=0; i<n;i++)
        cout<<arr[i]<<"  ";
}
int main()
{
    int n,k;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for (int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Original Array: ";
    display(arr,n);
    sort_arr(arr,n);
    cout<<"\nSorted Array: ";
    display(arr,n);
    cout<<endl<<"Enter k for min:";
    cin>>k;
    cout<<endl;
    Mini_k(arr,k);
    cout<<endl<<"Enter k for max:";
    cin>>k;

    cout<<endl;
    Max_k(arr,n,k);


    return 0;
}
