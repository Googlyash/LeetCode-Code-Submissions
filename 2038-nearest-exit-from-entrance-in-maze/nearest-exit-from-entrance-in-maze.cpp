//Sep'11, 2023 05:30 pm

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n=maze.size(), m=maze[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        vis[entrance[0]][entrance[1]]=1;
        queue<pair<int, pair<int, int>>>q;
        q.push({0, {entrance[0], entrance[1]}});
        
        int di[]={-1, 0, 1, 0, -1};
        int t=INT_MAX;
        while(!q.empty()){
            int t1=q.front().first;
            int x1=q.front().second.first;
            int y1=q.front().second.second;
            q.pop();

            if(t1!=0 && ((x1==0) || (y1==0)|| (x1==n-1)|| (y1==m-1))){
                t=min(t, t1);
            }
            for(int i=0;i<4;i++){
                int r= x1+di[i];
                int c= y1+di[i+1];

                if(min(r,c)>=0 && r<n && c<m && maze[r][c]=='.' && !vis[r][c]){
                    vis[r][c]=1;
                    q.push({t1+1, {r, c}});
                }
            }
        }
        if(t>1e9)return -1;
        return t;
    }
};