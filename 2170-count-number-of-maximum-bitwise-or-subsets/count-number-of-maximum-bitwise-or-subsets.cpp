// POTD Jul'28, 2025 
// Jul'28, 2025 07:46 pm

class Solution {
    int solve(int i, int take, long long cur, vector<int>&nums, long long ans){
        int present=0;
        if(cur>ans || i >=nums.size()){
            return 0;
        }
        if(take){
            cur=  cur | nums[i];
            if(cur== ans){
                present=1;
            }
        }
        return present+ solve(i+1, take, cur, nums, ans)+ solve(i+1, !take, cur, nums, ans);
    }
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n= nums.size();

        long long ans=0;
        for(auto it: nums){
            ans= ans | it;
        }
        return solve(0, 0, 0, nums, ans)+ solve(0, 1, 0, nums, ans);
    }
};

// 19 min