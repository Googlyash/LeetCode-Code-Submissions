//POTD Jul'3, 2024
//Jul'3, 2024 11:54 pm

class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        if(n<=4){
            return 0;
        }

        int ans= min({nums[n-4]-nums[0], nums[n-3]-nums[1], nums[n-2]-nums[2], nums[n-1]-nums[3]});
        return ans;
    }
};