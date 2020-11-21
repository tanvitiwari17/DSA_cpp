#include <iostream>

using namespace std;

void common_ele(int arr1[],int arr2[],int arr3[],int l,int m, int n)
{
    int i=0,j=0,k=0;
    while(i<l&&j<m&&k<n)
    {
        if (arr1[i]<arr2[j] and arr1[i]<arr3[k])
            i++;
        else if (arr2[j]<arr1[i] and arr2[j]<arr3[k])
            j++;
        else if (arr3[k]<arr1[i] and arr3[k]<arr2[j])
            k++;
        else
        {
            cout<<arr3[k]<<" ";
            i++;
            j++;
            k++;
        }
    }
}
int main()
{
    int arr1[]={1,4,8,9,12,15};
    int arr2[]={2,4,6,8,10,12};
    int arr3[]={4,8,12,16,20};
    int l=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    int n=sizeof(arr3)/sizeof(arr3[0]);

    cout<<"Common element: ";
    common_ele(arr1,arr2,arr3,l,m,n);
    return 0;
}
