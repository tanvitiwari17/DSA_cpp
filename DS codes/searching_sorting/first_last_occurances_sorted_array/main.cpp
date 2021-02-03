/*
Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Note: If the number x is not found in the array just print '-1'.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void firstLastOccur(int arr[],int n,int x){
    vector <int> v1;
    for(int i=0;i<n;i++)
    {
        if (arr[i]==x)
        v1.push_back(i);
    }
    if(v1.size()==0)
        cout<<"-1";
    else
    cout<<v1[0]<<" "<<v1[v1.size()-1];
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    firstLastOccur(arr,n,x);
	    cout<<endl;
	}

	return 0;
}
