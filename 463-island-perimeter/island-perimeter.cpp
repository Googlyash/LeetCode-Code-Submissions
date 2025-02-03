// Feb'3, 2025 09:38 pm

class Solution {
    int dfs(int i, int j, vector<vector<int>>&grid, vector<vector<int>>&vis){
        int n= grid.size(), m= grid[0].size();
        vis[i][j]=1;

        int dir[]= {0, -1, 0, 1, 0};
        int ans=0;
        for(int k=0; k<4;k++){
            int r= i+ dir[k];
            int c= j+ dir[k+1];

            if(min(r,c)>=0 && r<n && c<m && grid[r][c]==1){
                if(!vis[r][c]) ans+=dfs(r, c, grid, vis);
            }
            else {
                ans++;
            }
        }
        return ans;
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n= grid.size(), m=grid[0].size();
        int ans=0;

        vector<vector<int>>vis(n, vector<int>(m, 0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    ans+=dfs(i,j, grid, vis);
                }
            }
        }

        return ans;
    }
};

// 8 min