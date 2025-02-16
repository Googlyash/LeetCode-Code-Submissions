// POTD Feb'16, 2025
// Feb'16, 2025 11:36 pm

class Solution {
    bool solve(int ind, vector<int>&ans, vector<bool>vis, int n){
        if(ind== ans.size()){
            return true;
        }
        if(ans[ind]!=-1){
            return solve(ind+1, ans, vis, n);
        }

        for(int i=n; i>0;i--){
            if(vis[i]){
                continue;
            }
            vis[i]= true;
            ans[ind]= i;
            if(i==1){
                if(solve(ind+1, ans, vis, n)){
                    return true;
                }
            }
            else if(ind+i< ans.size() && ans[ind+i]==-1){
                ans[i+ ind]= i;
                if(solve(ind+1, ans, vis, n)){
                    return true;
                }
                ans[ind+ i]=-1;
            }
            ans[ind]=-1;
            vis[i]= false;
        }

        return false;
    }
public:
    vector<int> constructDistancedSequence(int n) {
        vector<int>ans (n*2-1, -1);

        vector<bool>vis(n+1, false);
        solve(0, ans, vis, n);
        return ans;
    }
};

// Comemnts
// 27 min