// Mar'14, 2026 09:59 pm
// Graph Practice

class Solution {
private:
    bool checkCycle(int cur, vector<int>&vis, vector<int>&pathVis, vector<int>adj[]){
        vis[cur]=1;
        pathVis[cur]=1;

        for(auto neighbor: adj[cur]){
            // cout<<cur<<" "<<neighbor<<" "<<vis[neighbor]<<endl;
            if(!vis[neighbor]){
                pathVis[neighbor]=1;
                if(checkCycle(neighbor, vis, pathVis, adj)){
                    return true;
                }
                pathVis[neighbor]=0;
            }
            else if(pathVis[neighbor]){
                return true;
            }
        }
        pathVis[cur]=0;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];

        for(auto pre: prerequisites){
            adj[pre[1]].push_back(pre[0]);
        }

        vector<int>vis(numCourses, 0);
        vector<int>pathVis(numCourses, 0);
        for(int i=0;i<numCourses; i++){
            if(!vis[i]){
                if(checkCycle(i, vis, pathVis, adj)){
                    return false;
                }
            }
        }
        return true;
    }
};

// 17 min