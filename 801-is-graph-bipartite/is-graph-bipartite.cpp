// Mar'14, 2026 09:16 pm
// Graph practice

class Solution {
    bool bfs(int node, int pre, vector<int>&vis, vector<vector<int>>&graph){
        vis[node]= 3 - pre;

        queue<int>q;
        q.push(node);
        while(!q.empty()){
            int top= q.front();
            int col= vis[top];

            q.pop();
            for(auto neighbor: graph[top]){
                if(!vis[neighbor]){
                    vis[neighbor]= 3 - col;
                    q.push(neighbor);
                }
                else if(vis[neighbor] == col){
                    return true;
                }
            }
        }
        return false;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n= graph.size();

        vector<int>vis(n, 0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(bfs(i, 1, vis, graph)){
                    return false;
                }
            }
        }
        return true;
    }
};

// 9 min