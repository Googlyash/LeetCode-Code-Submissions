//Striver SDE Sheet
//Aug'4, 2023
//Recursion with memoization

class Solution {
private:
    int f(int i, int j, vector<int>&nums, vector<vector<int>> &dp){
        if(i==nums.size()){
            return 0;
        }

        if( dp[i][j+1]!=-1)return dp[i][j+1];
        int nottake= 0+ f(i+1, j, nums, dp);
        int take=INT_MIN;
        if(j==-1 || nums[i]> nums[j]){
            take= 1+ f(i+1, i, nums, dp);
        }
        return dp[i][j+1]=max(take, nottake);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1 , vector<int>(n+1, -1));
        return f(0, -1, nums, dp);
    }
};
