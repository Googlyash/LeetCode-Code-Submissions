// Jan'24 ,2025 09:53 am

class Solution {
    void dfs(int node, vector<int>&vis, vector<vector<int>>adj){
        vis[node]=1;

        for(auto neighbor: adj[node]){
            if(!vis[neighbor]){
                dfs(neighbor, vis, adj);
            }
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n= rooms.size();
        vector<vector<int>>adj(n);

        for(int i=0;i<n;i++){
            for(auto it:rooms[i]){
                adj[i].push_back(it);
            }
        }

        vector<int>vis(n, 0);
        dfs(0, vis, adj);
        for(int i=1;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }

        return true;
    }
};

// 7 min