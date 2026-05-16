// POTD May' 16, 2026
// May'17, 2026 02:01 am

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();

        int l=0, r=n-1;
        int mn=0;

        while(l<r){
            int mid= l + (r-l)/2;

            if(nums[mid]<nums[r]){
                r=mid;
            }
            else if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else {
                r--;
            }
        }
        return nums[l];
    }
};

// Comments