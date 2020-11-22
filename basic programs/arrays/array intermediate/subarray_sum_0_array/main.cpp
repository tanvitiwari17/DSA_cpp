#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool subarrayexist(int arr[],int n)
{
    unordered_set<int> sumset;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

        if (sum==0 ||sumset.find(sum)!=sumset.end())
            return true;
        sumset.insert(sum);
    }
    return false;
}
int main()
{
    int arr[] ={-3,2,1,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    if (subarrayexist(arr,n))
        cout<<"Subarray Exists";
    else
        cout<<"Subarray does not exist.";
    return 0;
}
