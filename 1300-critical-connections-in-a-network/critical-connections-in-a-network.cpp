//Striver Graph: 55
//Sep'5, 2023 07:24 pm
//Striver's Code

class Solution {
private:
    int timer=1;
    void dfs(int node, int parent, int tin[], int low[], vector<int>&vis, vector<int>adj[], vector<vector<int>>&bridges){
        vis[node]=1;
        tin[node]=low[node]=timer;
        timer++;

        for(auto it:adj[node]){
            if(it==parent)continue;
            if(!vis[it]){
                dfs(it, node, tin, low, vis, adj, bridges);
                low[node]=min(low[it], low[node]);
                if(low[it]> tin[node]){
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
        int tin[n];
        int low[n];
        vector<vector<int>>bridges;
        dfs(0, -1, tin, low, vis, adj, bridges);
        return bridges;
    }
};

