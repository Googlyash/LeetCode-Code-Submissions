//Striver SDE Sheet Day 26
//Aug'7,2023 06:40 pm

class Solution {
private:
    int f(int i, int j, vector<vector<int>>&grid, vector<vector<int>>&dp){
        if(i==grid.size()-1 && j==grid[0].size()-1){
            return grid[i][j];
        }
        if(i==grid.size() || j==grid[0].size())return 1e8;

        if(dp[i][j]!=-1)return dp[i][j];
        int right= grid[i][j]+ f(i, j+1, grid, dp);
        int down= grid[i][j]+ f(i+1, j, grid, dp);

        return dp[i][j]=min(right, down);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size()+1, vector<int>(grid[0].size()+1, -1));
        return f(0, 0, grid, dp);
    }
};