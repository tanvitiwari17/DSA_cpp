#include <iostream>
using namespace std;

int Insert(int arr[],int n, int x, int cap, int pos)
{
    if (n==cap)
        return n;
    int idx= pos-1;
    for(int i=n-1;i>=idx;i--)
        arr[i+1]=arr[i];
    arr[idx]=x;
    return(n+1);
}

int Search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
        if (arr[i]==x)
        return i;
    return -1;
}
int Delete(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
        if(arr[i]==x)
        break;
        if (i==n)
            return n;
        for (int j=i;j<n-1;j++)
        arr[j]=arr[j+1];
        return(n-1);
}
int getLargest(int arr[],int n)
{
    int largest =0;
    for (int i=0;i<n;i++)
        if(arr[i]>arr[largest])
        largest =i;
    return largest;
}
int SecondLargest(int arr[],int n)
{
     int res=-1, largest =0;
     for (int i=0;i<n;i++)
     {
         if (arr[i]>arr[largest])
            {
                res=largest;
                largest=i;
            }
         else if (arr[i]!=arr[largest])
         {
             if ((res==-1)|| arr[i]>arr[res])
                res =i;
         }
     }
     return res;
    }



int main()
{   int n=5;
    int arr[7]= {3,5,9,4,2};
    //cout<<Display(arr,7)<<endl;
    cout<<Insert(arr,n,8,7,4)<<endl;
    for (int i=0;i<=n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<Search(arr,7,2)<<endl;
    cout<<Delete(arr,6,4)<<endl;
    for (int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<getLargest(arr,5)<<endl;
    cout<<SecondLargest(arr,5)<<endl;
    int arr2[]={0,0,0,0,0};
    cout<<SecondLargest(arr2,5)<<endl;

    return 0;
}
