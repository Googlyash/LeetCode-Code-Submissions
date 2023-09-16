//POTD Sep'15, 2023 
//Sep'15, 2023 06:26 pm
//Prim's Algo: MST
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int ans=0, n=points.size(), connected=0, i=0;

        vector<int>vis(n, 0);
        priority_queue<pair<int, int>>pq;
        while(++connected<n){
            vis[i]=1;
            for(int j=0;j<n;j++){
                if(!vis[j]){
                    pq.push({-(abs(points[i][0]-points[j][0])+abs(points[j][1]-points[i][1])), j});
                }
            }
            while(vis[pq.top().second]){
                pq.pop();
            }
            ans-=pq.top().first;
            i=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};

//Comments: 30 min