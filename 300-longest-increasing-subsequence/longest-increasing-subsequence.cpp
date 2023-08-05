//Striver SDE Sheet
//Aug'4, 2023 05:28 pm
//Recursion with memoization

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size(), ans=1;
        vector<int> dp(n+1, 0);
        for(int i=0;i<n;i++)dp[i]=1;
        dp[0]=1;
        for(int i=1;i<n ;i++){
            for(int j=0; j<=i; j++){
                if( nums[i]> nums[j])
                dp[i]=max(dp[i], dp[j]+1);
                ans=max(ans, dp[i]);
            }
        }
        return ans;
    }
};
