//Striver SDE Sheet Day 26
//Aug'7,2023 06:50 pm

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>>dp(n+2, vector<int>(m+2, 0));
        for(int i=0;i<=n;i++)dp[i][m]=1e8;
        for(int j=0;j<=m;j++)dp[n][j]=1e8;
        dp[n][m]=0;
        dp[n-1][m]=0;
        dp[n][m-1]=0;
        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                int right= grid[i][j]+ dp[i][j+1];
                int down= grid[i][j]+ dp[i+1][j];
                dp[i][j]=min(right, down);
            }
        }
        return dp[0][0];
    }
};