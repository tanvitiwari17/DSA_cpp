#include <iostream>

using namespace std;

void first_duplicate(int arr[],int n)
{
    int c=0;
    for (int i=0;i<n;i++)
        for (int j=n;j>0;j--)
        if(arr[i]==arr[j])
        {cout<<i<<" ";
        c++;
    {if (c==1)
        break;}}
    else
    cout<<"-1";

}
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Duplicate is: ";
    first_duplicate(arr,n);
    return 0;
}
