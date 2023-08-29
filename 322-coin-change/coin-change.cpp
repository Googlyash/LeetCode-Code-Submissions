//Aug'29, 2023 03:17 pm

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();

        
        vector<vector<int>>dp(n+1, vector<int>(amount+1, 0));
        for(int cnt=1;cnt<=amount; cnt++){
            dp[0][cnt]=1e8;
        }
        for(int i=1;i<=n;i++){
            for(int cnt=1;cnt<=amount;cnt++){
                int nottake=dp[i-1][cnt];
                int take=1e8;
                if(coins[i-1]<=cnt){
                    take= 1+ dp[i][cnt-coins[i-1]];
                }
                dp[i][cnt]=min(take, nottake);
            }
        }
        return dp[n][amount]>= 1e8? -1: dp[n][amount];
    }
};