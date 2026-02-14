//POTD Feb'14, 2026
// Feb'14, 2026 08:36 pm

class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {

        vector<vector<double>>dp(query_row+1, vector<double>(query_row+1, 0));
        dp[0][0]=poured;
        for(int i=1; i<=query_row; i++){
            for(int j=0;j<=query_glass;j++){
                if(dp[i-1][j]>=1)dp[i][j]=(dp[i-1][j]-1)/2;
                if(j>0 && dp[i-1][j-1]>=1)dp[i][j]+=(dp[i-1][j-1]-1)/2;
            }
        }

        return min(1.00, dp[query_row][query_glass]);
    }
};

//Comments