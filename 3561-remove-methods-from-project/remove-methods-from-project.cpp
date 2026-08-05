// POTD Aug'5, 2026
// Aug'5, 2026 11:07 pm

class Solution {
    bool check(int node, vector<int>&vis, unordered_map<int, int>&mp, vector<int>adj[]){
        if(!mp[node]){
            return true;
        }
        vis[node]=1;
        for(auto neighbor:adj[node]){
            if(!vis[neighbor] && check(neighbor, vis, mp, adj)){
                return true;
            }
        }
        return false;
    }
    void dfs(int node, bool sus, vector<int>&vis, unordered_map<int, int>&mp, vector<int>adj[]){
        vis[node]=1;
        for(auto neighbor: adj[node]){
            if(!vis[neighbor]){
                mp[neighbor]=sus;
                dfs(neighbor, sus, vis, mp, adj);
            }
        }
    }
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<int>adj[n+1];
        unordered_map<int, int>mp;

        for(auto it: invocations){
            int u= it[0], v=it[1];
            adj[u].push_back(v);
        }

        vector<int>vis(n+1, 0);
        mp[k]=1;
        dfs(k, 1, vis, mp, adj);
        ranges::fill(vis, 0);

        for(int i=0;i<n;i++){
            if(!vis[i] && i!=k && mp[i]==0){
                dfs(i, 0, vis, mp, adj);
            }
        }
        ranges::fill(vis, 0);
        if(check(k, vis, mp, adj)){
            ranges::fill(vis, 0);
            mp[k]=0;
            dfs(k, 0, vis, mp, adj);
        }

        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!mp[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// 41 min