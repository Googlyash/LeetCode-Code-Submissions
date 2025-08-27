// POTD Aug'27, 2025
// Aug'27, 2025 10:01 pm

class Solution {
    int solve(int i, int j, int turn, int k, vector<vector<int>>&grid, vector<vector<vector<int>>>&dp){
        int n= grid.size(), m= grid[0].size();
        if(min(i,j)<0 || i>=n || j>=m){
            return 0;
        }

        if(dp[i][j][k+ 4*turn]!=-1){
            return dp[i][j][k+ 4*turn];
        }
        int ans=0;
        vector<int> dir= {1, 1, -1, -1, 1, 1};
        if(turn){
            int r= i+ dir[k+1], c= j+ dir[k+2];
            if(min(r,c)>=0 && r<n && c<m && abs(grid[i][j]-grid[r][c])==2){
                ans= max(ans, solve(r, c, 0, (k+1)%4, grid, dp)+1);
            }
        }

        int r= i+ dir[k], c= j+ dir[k+1];
        if(min(r,c)>=0 && r<n && c<m && abs(grid[i][j]-grid[r][c])==2){
            ans= max(ans, solve(r, c, turn, k, grid, dp)+1);
        }

        // cout<< i<<" "<<j<<" "<<ans<<endl;
        return dp[i][j][k+ 4*turn]= ans;
    }
public:
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int n= grid.size(), m= grid[0].size();
        int ans=0;

        vector<vector<vector<int>>>dp(n, vector<vector<int>>(m, vector<int>(8, -1)));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int cur=1;
                    // cout<<i<<" "<<j<<": \n";
                    vector<int> dir= {1, 1, -1, -1, 1};
                    for(int k=0;k<4;k++){
                        int r= i+dir[k], c= j+dir[k+1];
                        if(min(r,c)>=0 && r<n && c<m && grid[r][c]==2){
                            cur= max(cur, solve(r, c, 1, k, grid,dp)+2);
                        }
                    }
                    ans= max(ans, cur);
                    // cout<<endl;
                }
            }
        }
        return ans;
    }
};

// 85 min