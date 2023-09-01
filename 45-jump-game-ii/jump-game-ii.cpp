//Sep'1, 2023 10:28 pm

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1, 1e9);
        dp[0]=0;

        for(int i=0;i<n;i++){
            int end=min(n-1, i+nums[i]);
            for(int j=i;j<=end; j++){
                dp[end]=min(dp[end], dp[j]+1);
            }
        }
        if(dp[n-1]>=1e9){
            return -1;
        }
        return dp[n-1];
    }
};