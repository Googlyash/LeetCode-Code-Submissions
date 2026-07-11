// POTD Jul'11, 2026
// Jul'12, 2026 02:25 am

class Solution {
    void dfs(int node, int par, vector<int>&vis, set<int>&cur, vector<int>adj[]){
        if(vis[node]){
            return;
        }
        vis[node]=1;
        cur.insert(node);
        for(auto neighbor: adj[node]){
            if(neighbor!= par && !vis[neighbor]){
                dfs(neighbor, node, vis, cur, adj);
            }
        }
        return;
    }
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int cnt=0;

        vector<int>adj[n];
        for(auto it: edges){
            int u= it[0];
            int v= it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int>vis(n, 0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                set<int>cur;
                dfs(i, -1, vis, cur, adj);
                int k= cur.size(), check=0;
                for(auto it: cur){
                    if(adj[it].size()==k-1){
                        check++;
                    }
                }
                if(check==k)cnt++;
            }
        }
        return cnt;
    }
};

// 12 min