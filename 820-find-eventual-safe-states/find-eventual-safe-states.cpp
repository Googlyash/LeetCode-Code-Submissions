// POTD Jan'24, 2025
// Jan'25, 2025 12:32 am

class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& G) {
        int N = G.size();
        vector<vector<int>> R(N);
        vector<int> outdegree(N), safe(N), ans;
        queue<int> q;
        for (int i = 0; i < N; ++i) {
            for (int v : G[i]) {
                R[v].push_back(i);
            }
            outdegree[i] = G[i].size();
            if (outdegree[i] == 0) q.push(i);
        }
        while (q.size()) {
            int u = q.front();
            q.pop();
            safe[u] = 1;
            for (int v : R[u]) {
                if (--outdegree[v] == 0) q.push(v);
            }
        }
        for (int i = 0; i < N; ++i) {
            if (safe[i]) ans.push_back(i);
        }
        return ans;
    }
};

// Comments
// 6 min

/*
vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n= graph.size();

        vector<int>ans;
        for(int i=0; i<n;i++){
            int cursz=0;
            for(int j=0;j<graph[i].size(); j++){
                if(graph[graph[i][j]].size()==0){
                    cursz++;
                }
            }
            if(cursz== graph[i].size()) ans.push_back(i) ;
        }

        return ans;
    }
*/