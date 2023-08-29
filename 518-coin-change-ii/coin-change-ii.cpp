//Aug'29, 2023 03:29 pm

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();

        vector<vector<int>>dp(n+1, vector<int>(amount+1, 0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }

        for(int i=1;i<=n;i++){
            for(int cnt=1; cnt<=amount; cnt++){
                int nottake= dp[i-1][cnt];
                int take=0;
                if(coins[i-1]<=cnt){
                    take= dp[i][cnt-coins[i-1]];
                }
                dp[i][cnt]= take+nottake;
            }
        }
        return dp[n][amount];
    }
};