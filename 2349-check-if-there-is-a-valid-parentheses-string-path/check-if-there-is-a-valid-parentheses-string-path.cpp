// POTD Sep'29, 2026
// Sep'30, 2026 01:32 am

class Solution {
    bool solve(int i, int j, int cnt, vector<vector<char>>&grid, vector<vector<vector<int>>>&dp){
        int n= grid.size(), m= grid[0].size();

        if(i>=n || j>=m){
            return false;
        }

        if(grid[i][j]=='('){
            cnt++;
        }
        else {
            cnt--;
        }
        if(cnt<0){
            return false;
        }

        if(i==n-1 && j==m-1){
            return cnt==0;
        }
        if(dp[i][j][cnt]!=-1){
            return dp[i][j][cnt];
        }
        bool allow= false;
        allow |= solve(i+1, j, cnt, grid, dp);
        allow |= solve(i, j+1, cnt, grid, dp);
        return dp[i][j][cnt]= allow;
    }
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int n= grid.size(), m= grid[0].size();

        vector<vector<vector<int>>>dp(n, vector<vector<int>>(m, vector<int>(n+m, -1)));
        return solve(0, 0, 0, grid, dp);
    }
};

// 9 min