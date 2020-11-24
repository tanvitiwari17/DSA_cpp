#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[],int n)
{
/*    int i,counter=-1;
    do{
        counter++;
        i=arr[i];
    }
    while(i<n);

    for(i=0;i<n;i=i+arr[i])
    {
        if (i>n)
            counter=counter+1;
        counter++;
    }

    return counter;

*/
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Minimum number of jumps required : "<<minJumps(arr,n);
    return 0;
}
