// POTD May'15, 2026
// May'16, 2026 01:31 am

// Dec'23, 2024 05:03 pm

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();
        int l=0, r=n-1;
        int mid= l+ (r-l)/2;
        int ans= nums[0];

        while(l<=r){
            mid= l+(r-l)/2;

            if(nums[l]<= nums[r]){
                ans= min(ans, nums[l]);
                break;
            }
            if(nums[mid]>= nums[l]){
                ans= min(ans, nums[l]);
                l= mid+1;
            }
            else {
                ans= min(ans, nums[mid]);
                r=mid-1;
            }
        }

        return ans;
    }
};

// Earlier solved