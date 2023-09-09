//POTD Sep'9, 2023 
//Sep'9, 2023 06:51 pm

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        vector<unsigned long long>dp(target+1, 0);

        dp[0]=1;
        for(int k=1;k<=target;k++){
            for(int i=0;i<n; i++){
                if(nums[i]<=k){
                    dp[k]+=dp[k-nums[i]];
                }
            }
        }

        return dp[target];
    }
};

//Comments
