//Sep'20, 2023 05:25 pm

class Solution {
private:
    int timer=1;
private:
    void dfs(int node, int parent, vector<int>&vis, int tn[], int low[], vector<int>adj[], vector<vector<int>>&bridges){
        vis[node]=1;
        tn[node]=low[node]=timer++;

        for(auto it:adj[node]){
            if(it==parent)continue;
            if(!vis[it]){
                dfs(it, node, vis, tn, low, adj, bridges);
                low[node]=min(low[node], low[it]);
                if(low[it]> tn[node]){
                    bridges.push_back({node, it});
                }
            }
            else {
                low[node]=min(low[it], low[node]);
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

        vector<int>vis(n, 0);
        int tn[n], low[n];
        vector<vector<int>>bridges;
        dfs(0, -1, vis, tn, low, adj, bridges);
        return bridges;
    }
};