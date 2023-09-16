//POTD Sep'16, 2023 
//Sep'16, 2023 11:21 pm
//Comments

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size(), m=heights[0].size();
        priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>pq;

        vector<vector<int>>dis(n, vector<int>(m, 1e7));
        pq.push({0, {0, 0}});
        dis[0][0]=0;

        int div[]={-1, 0, 1, 0, -1};
        while(!pq.empty()){
            int d=pq.top().first;
            int i=pq.top().second.first;
            int j=pq.top().second.second;
            pq.pop();

            if(i==n-1 && j==m-1)return d;
            for(int k=0;k<4;k++){
                int x=i+ div[k];
                int y=j+ div[k+1];

                if(min(x,y)>=0 && x<n && y<m){
                    int kd=max(d, abs( heights[i][j]- heights[x][y]));

                    if(kd< dis[x][y]){
                        dis[x][y]=kd;
                        pq.push({kd, {x, y}});
                    }
                }
            }
        }
        return 0;
    }
};