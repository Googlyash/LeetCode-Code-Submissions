// POTD Apr'2, 2026
// Apr'3, 2026 04:46 am

class Solution {
public:
    int maximumAmount(vector<vector<int>>& coins) {
        int n= coins.size(), m= coins[0].size();

        vector<vector<vector<long long>>>dp(n+1, vector<vector<long long>>(m+1, vector<long long>(3, -1e9)));
        dp[n-1][m-1][1]= dp[n-1][m-1][2]= max(0, coins[n-1][m-1]);
        dp[n-1][m-1][0]= coins[n-1][m-1];
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                for(int ignore=0;ignore<3;ignore++){
                    long long neut= -1e9, notNeut= -1e9;
                    if(ignore>0){
                        neut= max(dp[i+1][j][ignore-1], dp[i][j+1][ignore-1]);
                    }
                    notNeut= coins[i][j]+ max(dp[i+1][j][ignore], dp[i][j+1][ignore]);
                    dp[i][j][ignore]= max({neut, notNeut, dp[i][j][ignore]});
                }
            }
        }
        return *max_element(dp[0][0].begin(), dp[0][0].end());
    }
};

// 25 min