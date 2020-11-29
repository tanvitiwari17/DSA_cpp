/*
Methods:
1. loop
TC - O(n*m)
SC - O(1)

2. Sorting + Binary Search
TC - O(nlogn + mlogm)
SC - O(1)

3. Sorting + two ptr
TC - O(nlogn + mlogm)
SC - O(1)

4. Hashing
TC - O(n)
SC - O(n)
*/

// Soring and Merging/2 ptr

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool issubset(int arr1[],int arr2[],int m,int n){

int i = 0, j = 0;
if(m < n)
    return 0;

sort(arr1,arr1+m);
sort(arr2,arr2+n);

while(i<m and j<n){
    if(arr1[i]<arr2[j])
        i++;
    else if (arr1[i]==arr2[j])
    {
        i++;
        j++;
    }
    else if (arr1[i]>arr2[j])
        return 0;
}
return (j<n) ? false :true;

}

int main()
{
    int arr1[] = {11,1,13,21,3,7};
    int arr2[] = {11,3,7,1};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    if(issubset(arr1,arr2,m,n))
        cout<< "arr2[] is subset of arr1[]";
    else
        cout<< "arr2[] is not a subset of arr1[]";
    return 0;
}
