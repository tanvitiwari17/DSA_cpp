#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int diff(int* arr,int size,int n){
    int i=0,j=1;
    while(i<size and j<size){
        if(i!=j and arr[j]-arr[i]==n){
            return 1;
        }
        else if(arr[j]-arr[i]<n){
            j++;
        }
        else
        i++;
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,differ;
	    cin>>n>>differ;
	    int *arr=new int[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    cout<<diff(arr,n,differ)<<endl;

	}

	return 0;
}
