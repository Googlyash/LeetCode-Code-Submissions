//POTD Nov'17, 2023
//Nov'17, 2023 07:10 pm

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size(), ans=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<=n/2;i++){
            ans=max(ans, nums[i]+nums[n-1-i]);
        }
        return ans;
    }
};