class Solution {
    int binary_search(vector<int>nums,int start,int end,int target){
        int mid;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                start=mid+1;
            else if(nums[mid]>target)
                end=mid-1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        if (n==1)
        {
            return nums[0]==target?0:-1;
        }
        int l=0,r=n-1,mid;

        int pos=0;
        while(l<=r){
            mid=(l+r)/2;
            if(mid<r and nums[mid]>nums[mid+1]){
                pos=mid+1;
                break;
            }
            else if (mid>1 and nums[mid]< nums[mid-1])
            {
                pos=mid-1;
                break;
            }
            else if (nums[r]<nums[mid]){
                l=mid+1;
            }
            else
            {r=mid-1;
            }
        }
      int index = binary_search(nums,0,pos,target);
        if(index!=-1){
            return index;
        } else
            return binary_search(nums,pos,n-1,target);
    }
};
