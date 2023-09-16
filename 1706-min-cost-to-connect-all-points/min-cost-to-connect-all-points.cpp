//POTD Sep'15, 2023 
//Sep'15, 2023 06:26 pm
//Prim's Algo: MST
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int ans=0, n=points.size(), connected=0, i=0;

        vector<pair<int, int> >adj[n];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int dist= abs(points[i][0]-points[j][0])+abs(points[j][1]- points[i][1]);
                adj[i].push_back({j, dist});
                adj[j].push_back({i, dist});
            }
        }
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>>pq;
        pq.push({0, 0});
        vector<int>vis(n ,0);
        while(!pq.empty()){
            int node=pq.top().second;
            int wt=pq.top().first;
            pq.pop();

            if(vis[node])continue;
            vis[node]=1;
            ans+=wt;
            for(auto it:adj[node]){
                int adjNode=it.first;
                int adjW= it.second;
                if(!vis[adjNode]){
                    pq.push({adjW, adjNode});
                }
            }
        }
        return ans;
    }
};

//Self+ Comments: 30 min