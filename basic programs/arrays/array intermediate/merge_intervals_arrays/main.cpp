/*
Method 1 : using stack, TC=O(nlogn), SC=O(n)
Method 2 :O(nlogn), SC=O(1)
*/

//Method 2

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int s,e; // start, end
};

//to sort
bool mycomp(Interval a, Interval b)
{
    return(a.s < b.s);
}

void mergeIntervals(Interval arr[], int n)
{
    sort(arr,arr+n,mycomp);
    int index =0;
    for(int i=1;i<n;i++)
    {
        if(arr[index].e >= arr[i].s)
        {
            arr[index].e = max(arr[index].e,arr[i].e);
            arr[index].s = min(arr[index].s,arr[i].s);
        }
        else
        {
            index++;
            arr[index]=arr[i];
        }
    }

    cout<<"The Merged Intervals are: ";
    for(int i =0;i<=index;i++)
        cout<<"["<<arr[i].s<<","<<arr[i].e<<"] ";
}
int main()
{
    Interval arr[] ={ {8,11}, {1,3}, {2,4}, {4,6} };
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeIntervals(arr,n);
    return 0;
}
