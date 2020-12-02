#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
using namespace std;

void first_repeating_ele(int a[],int n)
{
   int const N = 10^6;
   int idx[N];
   for(int i=0;i<N;i++)
   {
       idx[i]=-1;
   }
   int minidx = INT_MAX;
   for(int i=0;i<n;i++)
   {
       if(idx[a[i]]!=-1)
       {
           minidx = min(minidx,idx[a[i]]);
       }
       else
       {
           idx[a[i]]=i;
       }
   }
   if (minidx== INT_MAX)
   {
       cout<<"-1"<<endl;
   }
   else
    cout<<a[minidx]<<endl;
}

int main()
{
    int arr[]={10,5,3,4,3,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"The first repeating element is : ";
    first_repeating_ele(arr,n);
    return 0;
}
