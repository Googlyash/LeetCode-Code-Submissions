//Striver SDE Sheet
//Aug'8, 2023 04:53 pm
//Tabulation

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size(),sum=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2==1)return false;

        vector<vector<int>>dp(n+1, vector<int>(sum/2 +1, 0));
        for(int i=0;i<=n;i++)dp[i][0]=true;
        for(int i=n-1; i>=0; i--){
          for(int j=1; j<=sum/2; j++){
            int nottake= dp[i+1][j];
            int take= false;
            if(nums[i]<=j){
                take= dp[i+1][j-nums[i]];
            }
            dp[i][j]= (take || nottake);
          }
        }
        return dp[0][sum/2];
    }
};