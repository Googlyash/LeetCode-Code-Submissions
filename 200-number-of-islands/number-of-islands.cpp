//Nov'24, 2023 10:54 pm

class Solution {
    void dfs(int i, int j, vector<vector<int>>&vis, vector<vector<char>>&grid){
        int n=grid.size(), m=grid[0].size();
        vis[i][j]=1;

        int d[5]={0, -1, 0, 1, 0};
        for(int l=0;l<4;l++){
            int r=i+d[l], c=j+d[l+1];

            if(min(r,c)>=0 && r<n && c<m && !vis[r][c] && grid[r][c]=='1'){
                dfs(r, c, vis, grid);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    ans+=1,  dfs(i, j, vis, grid);
                }
            }
        }
        return ans;
    }
};

//9 mins