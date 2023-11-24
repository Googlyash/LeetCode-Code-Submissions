//Nov'24, 2023 09:21 pm

class Solution {
    void dfs(int i, vector<int>adj[], vector<int>&vis){
        vis[i]=1;

        for(auto it:adj[i]){
            if(!vis[it]){
                dfs(it, adj, vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adj[n+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isConnected[i][j]==1)adj[i].push_back(j);
            }
        }
        int ans=0;
        vector<int>vis(n+1, 0);
        for(int i=0;i<n;i++){
            ans+= (vis[i]==0)? dfs(i, adj, vis), 1:0;
        }
        return ans;
    }
};

//7 mins