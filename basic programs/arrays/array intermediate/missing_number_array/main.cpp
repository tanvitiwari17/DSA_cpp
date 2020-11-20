#include <iostream>

using namespace std;

int missing_number(int arr[],int n)
{
    int total= (n+1)*(n+2)/2 ;
    for (int i=0;i<n;i++)
    {
        total-=arr[i];
    }
    return total;
}
int main()
{
    int arr[] = {1, 2, 5, 6, 3, 7, 8};
    int n= sizeof(arr)/sizeof(arr[0]);
    int miss= missing_number(arr,n);
    cout<<"Missing number: "<<miss;

    return 0;
}
