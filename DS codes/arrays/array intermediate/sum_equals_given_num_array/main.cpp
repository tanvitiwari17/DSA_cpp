#include <iostream>

using namespace std;
int count_pair(int arr[],int n,int sum)
{
    int i,j,counter=0;
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
                counter+=1;
        }
    }
    return counter;
}
int main()
{
    int arr[]={1,5,7,1};//{1,1,1,1};//{1,5,7,-1,5};
    int sum=6;//6;
    int n=sizeof(arr)/sizeof(arr[0]);
    int pairs = count_pair(arr,n,sum);
    cout<<"Pairs: "<<pairs;
    return 0;
}
