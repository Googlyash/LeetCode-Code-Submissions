//Nov'24, 2023 11:25 pm

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        // vector<vector<int>>vis(n, vector<int>(m, 0));
        vector<vector<int>>vis= grid;
        queue<pair<pair<int, int>, int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i, j}, 0});
                }
            }
        }

        int ans=0;
        while(!q.empty()){
            int i=q.front().first.first;
            int j=q.front().first.second;
            int t=q.front().second;
            q.pop();
            int d[5]={0, -1, 0, 1, 0};
            ans=max(ans, t);
            for(int l=0;l<4;l++){
                int r= i+ d[l], c=j+ d[l+1];

                if(min(r,c)>=0 && r<n && c<m && vis[r][c]==1){
                    vis[r][c]=2;
                    q.push({{r, c}, t+1});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(auto it:vis[i]){
                if(it==1){
                    return -1;
                }
            }
        }
        return ans;
    }
};

//9 mins