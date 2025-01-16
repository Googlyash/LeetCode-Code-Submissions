// Jan'16, 2025 06:58 pm

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();

        if(n==1 || nums[0]>nums[1]){
            return 0;
        }
        else if(nums[n-1]>nums[n-2]){
            return n-1;
        }

        int l=0, r=n-1;
        while(l<=r){
            int mid= l+ (r-l)/2;
            if(mid==0 || mid==n-1){
                return r;
            }
            if(nums[mid]> nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]<nums[mid+1]){
                l=mid+1;
            }
            else {
                r= mid-1;
            }
        }

        return r;
    }
};

// 13 min