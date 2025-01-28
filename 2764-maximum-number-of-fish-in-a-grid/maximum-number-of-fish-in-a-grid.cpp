// POTD Jan"28, 2025
// Jan'28, 2025 06:44 pm

class Solution {
    int solve(int i, int j, vector<vector<int>>&vis, vector<vector<int>>&grid){
        int n= grid.size(), m= grid[0].size();
        if(min(i,j)<0 || i>=n || j>=m || grid[i][j]==0){
            return 0;
        }

        vis[i][j]=1;

        // cout<<cur<<endl;

        int cur=0;
        cur+= grid[i][j];
        
        int dir[]= {-1, 0, 1, 0, -1};
        for(int k=0;k<4;k++){
            int r= i+dir[k], c= j+dir[k+1];
            if(min(r,c)>=0 && r<n && c<m && !vis[r][c] && grid[i][j]>0){
                cur+= solve(r, c, vis, grid);
            }
        }

        return cur;
    }
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int n= grid.size(), m=grid[0].size();

        int ans=0;
        vector<vector<int>>vis(n, vector<int>(m, 0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]>0){
                    ans= max(ans, solve(i, j, vis, grid));
                }
            }
        }

        return ans;
    }
};

// 17 min