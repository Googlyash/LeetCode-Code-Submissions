//POTD Aug'12, 2023 06:14 pm

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size(), m=obstacleGrid[0].size();
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        if(obstacleGrid[0][0]==0)dp[0][0]=1;
        for(int i=1;i<n;i++){
            dp[i][0]=dp[i-1][0];
            if(obstacleGrid[i][0]==1)dp[i][0]=0;
        }
        for(int j=1;j<m;j++){
            dp[0][j]=dp[0][j-1];
            if(obstacleGrid[0][j]==1)dp[0][j]=0;
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
                if(obstacleGrid[i][j]==1)dp[i][j]=0;
            }
        }
        return dp[n-1][m-1];
    }
};