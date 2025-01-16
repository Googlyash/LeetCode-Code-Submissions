// Jan'16, 2025 03:58 pm

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n= prices.size();

        // return solve(prices, 0, 0, fee);

        vector<vector<int>>dp(n+1, vector<int>(2, 0));

        for(int i=n-1; i>=0; i--){
            for(int buy=1; buy>=0; buy--){
                int noaction= dp[i+1][buy];
                int action= 0;
                if(buy){
                    action= -fee + prices[i] + dp[i+1][!buy];
                }
                else {
                    action= -prices[i] + dp[i+1][!buy];
                }

                dp[i][buy]= max(action, noaction);
            }
        }

        return dp[0][0];
    }
};

// 10 min

// Recursion
    // int solve(vector<int>&prices, int i, int buy, int fee){
    //     int n= prices.size();
    //     if(i==n){
    //         return 0;
    //     }

    //     int noaction= solve(prices, i+1, buy, fee);
    //     int action= 0;
    //     if(buy){
    //         action= -fee + prices[i] + solve(prices, i+1, !buy, fee);
    //     }
    //     else {
    //         action= -prices[i] + solve(prices, i+1, !buy, fee);
    //     }

    //     return max(action, noaction);
    // }