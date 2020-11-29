/*
Approaches:
1. Brute force (loops)
TC = O(n^3)

2. Sets/Map
TC = O(n^2)
SC = O(n)

3. Sort + 2 ptrs/traverse
TC = O(n^2)
SC = O(1)


*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void checktriplet(int arr[],int n,int sum)
{
    sort(arr,arr+n);
    int ans =0;
    for (int i =0;i<n-1;i++)
    {
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            if(arr[i]+arr[l]+arr[r] == sum)
            {
                ans =1;
                break;
            }
            else if (arr[i]+arr[l]+arr[r]<sum)
                l++;
            else
                r--;
        }
        if (ans == 1)
            break;
    }
    cout<<ans<<endl;
}

int main()
{
    int test_cases,n, sum;
    cout<<"Enter number of test cases: ";
    cin>>test_cases;
    for (int i=0;i<test_cases;i++)
    {
        cout<<"Enter n: ";
        cin>>n;
        cout<<"Enter sum ";
        cin>>sum;
        int arr[n];
        cout<<"Elements: ";
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<"is there a triplet summing upto "<<sum<<" (1/0):";
        checktriplet(arr,n,sum);
    }


    return 0;
}
