//POTD Apr'23, 2024
//Apr'23, 2024 11:59 pm

class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==0){
            return {};
        }
        if(n==1){
            return {0};
        }

        vector<int>ans, degree(n, 0);
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            degree[edges[i][0]]++;
            degree[edges[i][1]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(degree[i]==1){
                q.push(i);
            }
        }

        while(!q.empty()){
            ans.clear();
            int sz=q.size();

            for(int i=0;i<sz;i++){
                int cur=q.front();
                q.pop();
                ans.push_back(cur);
                for(auto &it: adj[cur]){
                    degree[it]--;
                    if(degree[it]==1){
                        q.push(it);
                    }
                }
            }
        }

        return ans;
    }
};

//Comments