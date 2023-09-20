//Sep'20, 2023 04:53 pm

class Solution {
private:
    int timer=1;
private:
    void dfs(int idx, int parent, vector<int>&vis, vector<int>&tn, vector<int>&low, vector<int>adj[], vector<vector<int>>&bridges){
        vis[idx]=1;
        tn[idx]=low[idx]=timer++;

        for(auto it:adj[idx]){
            if(it==parent)continue;
            if(!vis[it]){
                dfs(it, idx, vis, tn, low, adj, bridges);
                low[idx]=min(low[idx], low[it]);
                if(low[it]> tn[idx]){
                    bridges.push_back({it, idx});
                }
            }
            else{
                low[idx]=min(low[idx], low[it]);
            }
        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        for(auto it:connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<vector<int>> bridges;
        vector<int>tn(n, 0);
        vector<int>low(n+1, 0);
        vector<int>vis(n, 0);
        vector<int>ans;
        dfs(0, -1, vis, tn, low, adj, bridges);
        return bridges;
    }
};