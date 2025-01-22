// POTD Jan'22, 2025
// Jan'22, 2025 07:23 pm

class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n= isWater.size(), m= isWater[0].size();

        vector<vector<int>>ans(n, vector<int>(m, -1));
        
        // priority_queue<pair<int, pair<int, int>>>pq;
        queue<pair<int, int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j]==1){
                    // pq.push({0, {i,j}});
                    q.push({i,j});
                    ans[i][j]=0;
                }
            }
        }

        int dir[]= {-1, 0, 1, 0, -1};
        while(!q.empty()){
            // int i= pq.top().second.first;
            // int j= pq.top().second.second;
            // int h= pq.top().first;
            int i= q.front().first;
            int j= q.front().second;
            int h= ans[i][j];
            q.pop();

            for(int k=0;k<4;k++){
                int r= i+ dir[k];
                int c= j+ dir[k+1];

                if(min(r,c)>=0 && r<n && c<m){
                    if(ans[r][c]==-1 || ans[r][c]> h+1){
                        ans[r][c]= h+1;
                        q.push({r,c});
                        // pq.push({h+1, {r, c}});
                    }
                }
            }
        }

        return ans;
    }
};

// 32 min