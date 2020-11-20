#include <iostream>

using namespace std;

void repetation(int arr[],int n)
{
    for(int i=0;i<n;i++){
        int index=arr[i]%n;
        arr[index]+=n;
    }

    for (int i=0;i<n;i++)
    {
        if (arr[i]/n>=2)
            cout<<i<<" ";
    }
}
int main()
{
    int arr[]={1,6,3,1,3,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"duplicates are: ";
    repetation(arr,n);
    return 0;
}
