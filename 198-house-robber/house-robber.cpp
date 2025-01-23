// Jan'23, 2025 07:02 pm

class Solution {
    int solve(int i, int lastPick, vector<int>&nums){
        if(i==0){
            return lastPick==0 ? nums[0]: 0;
        }

        int notPick= solve(i-1, 0, nums);
        int pick=0;
        if(!lastPick){
            pick= nums[i]+ solve(i-1, 1, nums);
        }

        return max(pick, notPick);
    }
public:
    int rob(vector<int>& nums) {
        int n= nums.size();

        // return solve(n-1, 0, nums);

        vector<int>dp(2, 0);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int notPick= dp[0];
            int pick= nums[i]+ dp[1];

            dp[0]= max(pick, notPick);
            dp[1]= notPick;
        }
        return max(dp[0], dp[1]);
    }
};

// 14 min