// POTD Nov'26, 2025
// Nov'27, 2025 01:44 pm

class Solution {
    int solve(int i, int j, int cursum, int k, vector<vector<int>>&grid, vector<vector<vector<int>>>&dp){
        int mod= 1e9+7;
        if(i<0 || j<0){
            return 0;
        }
        cursum+= grid[i][j];
        cursum%=k;
        if(i==0 && j==0){
            return cursum==0;
        }
        if(dp[i][j][cursum]!=-1){
            return dp[i][j][cursum];
        }
        int ans= (solve(i-1, j, cursum, k, grid, dp)%mod+ solve(i, j-1, cursum, k, grid, dp)%mod)%mod;
        return dp[i][j][cursum]= ans;
    }
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n= grid.size(), m=grid[0].size();

        vector<vector<vector<int>>>dp(n+1, vector<vector<int>>(m+1, vector<int>(k+1, -1)));
        // dp[n-1][m-1][0]++;

        return solve(n-1, m-1, 0, k, grid, dp);
        // return dp[0][0][0];
    }
};

// 24 min