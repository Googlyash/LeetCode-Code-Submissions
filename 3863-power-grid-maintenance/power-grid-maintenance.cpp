// POTD Nov'6, 2025
// Nov'7, 2025 01:05 am

class Solution {
    void dfs(int i, vector<int>&vis, vector<vector<int>>&graph, map<int, int>&ind, int cnt){
        if(vis[i]){
            return ;
        }

        vis[i]=1;
        ind[i]= cnt;
        for(auto neighbor: graph[i]){
            if(!vis[neighbor]){
                dfs(neighbor, vis, graph, ind, cnt);
            }
        }
    }
public:
    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        int n= queries.size();
        map<int, bool>mp;

        int m= connections.size();
        vector<vector<int>>graph(c+1);
        for(auto it: connections){
            int u= it[0], v= it[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        map<int, priority_queue<int, vector<int>, greater<int>>>pq;
        vector<int>vis(c+1, 0), ans;
        map<int, int>ind;
        int cnt=1;
        for(int i=1;i<=c; i++){
            if(vis[i]==0){
                dfs(i, vis, graph, ind, cnt);
                cnt++;
            }
            pq[ind[i]].push(i);
        }
        for(auto it: queries){
            if(it[0]==2){
                mp[it[1]]= 1;
            }
            else {
                if(mp[it[1]]==0){
                    ans.push_back(it[1]);
                    continue;
                }
                if(pq[ind[it[1]]].empty()){
                    ans.push_back(-1);
                    continue;
                }
                int x= pq[ind[it[1]]].top();
                while(mp[x] && !pq[ind[it[1]]].empty()){
                    pq[ind[it[1]]].pop();
                    if(!pq[ind[it[1]]].empty())x= pq[ind[it[1]]].top();
                }
                if(!pq[ind[it[1]]].empty()){
                    ans.push_back(x);
                }
                else {
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};

// 35 min