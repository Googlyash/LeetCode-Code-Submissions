//Striver SDE Sheet
//Aug'8, 2023 04:53 pm
//Recursion with memoization

class Solution {
private:
    bool solver(int i, int sum, vector<int>&a, vector<vector<int>>&dp){
        if(sum<0)return false;
        if(sum==0)return true;
        if(i==a.size())return false;

        if(dp[i][sum]!=-1)return dp[i][sum];
        int nottake= solver(i+1, sum, a, dp);
        int take= false;
        if(a[i]<=sum){
            take= solver(i+1, sum-a[i], a, dp);
        }
        return dp[i][sum]= (take || nottake);
    }
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size(),sum=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2==1)return false;

        vector<vector<int>>dp(n+1, vector<int>(sum/2 +1, -1));
        return solver(0, sum/2, nums, dp);
    }
};