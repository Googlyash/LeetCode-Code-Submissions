// POTD Feb'4, 2025
// Feb'4, 2025 10:54 am

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n= nums.size();

        int ans=nums[0], cur=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                cur+=nums[i];
            }
            else {
                ans= max(ans, cur);
                cur= nums[i];
            }
        }
        ans= max(ans, cur);
        return ans;
    }
};

// 3 min