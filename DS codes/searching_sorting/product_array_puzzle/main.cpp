//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>&, int );

// your code will be pasted here

int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);

        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }

        vec = productExceptSelf(arr,n);   // function call

        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// nums: given vector
// return the Product vector P that hold product except self at each index
vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {

    //code here
    long long prod =1;
    int zeros=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0)
        prod*=nums[i];
        else
        zeros++;
    }

    if(zeros>1){
        for(int i=0;i<n;i++)
        nums[i]=0;
        return nums;
    }
    if(zeros==1){
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[i]=0;
            }
            else
            {nums[i]=prod;}
        }
            return nums;
        }

        for(int i=0;i<n;i++){
            nums[i]=prod/nums[i];
        }
       return nums;
    }
