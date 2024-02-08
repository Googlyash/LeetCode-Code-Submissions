//POTD Feb'8, 2023
//Feb'8, 2023 10: pm

class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+7,1e9);
        dp[1] = 1;
        for(int i = 1 ;i*i<=n;i++) dp[i*i] = 1;
        for(int i = 2;i<=n;i++){
                for(int j = 1 ; i- j*j>=0;j++) dp[i] = min(dp[i],dp[i-j*j] + 1);
        } 
        return dp[n];
    }
};