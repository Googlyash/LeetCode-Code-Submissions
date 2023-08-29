//Aug'29, 2023 03:17 pm

class Solution {
private: 
    int solve(int i, int cnt, vector<int>&v, vector<vector<int>>&dp){
        if(i<=0 && cnt!=0){
            return 1e8;
        }
        if(cnt==0){
            return 0;
        }

        if(dp[i][cnt]!=-1){
            return dp[i][cnt];
        }
        int nottake=solve(i-1, cnt, v, dp);
        int take=1e8;
        if(v[i-1]<=cnt){
            take= 1+solve(i, cnt-v[i-1], v, dp);
        }

        return dp[i][cnt]=min(take, nottake);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1, vector<int>(amount+1, -1));
        int ans=solve(n, amount, coins, dp);
        if(ans>=1e8)return -1;
        return ans;

        
        // vector<vector<int>>dp(n+1, vector<int>(amount+1, 0));
        for(int cnt=1;cnt<=amount; cnt++){
            dp[0][cnt]=1e8;
        }
        for(int i=1;i<=n;i++){
            for(int cnt=0;cnt<=amount;cnt++){
                int nottake=dp[i-1][cnt];
                int take=1e8;
                if(coins[i-1]<=cnt){
                    take= 1+ dp[i][cnt-coins[i-1]];
                }
                dp[i][cnt]=min(take, nottake);
            }
        }
        return dp[n][amount]>-1e8? -1: dp[n][amount];
    }
};