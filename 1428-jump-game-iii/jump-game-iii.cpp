// POTD May'18, 2026
// May'18, 2026 12:29 am

class Solution {
    bool solve(int ind, vector<int>&arr, vector<bool>&vis, vector<int>&dp){
        int n= arr.size();
        cout<<ind<<endl;
        if(ind<0 || ind>=n || vis[ind]){
            return false;
        }
        if(arr[ind]==0){
            return true;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        vis[ind]= true;
        bool ans= solve(ind-arr[ind], arr, vis, dp) || solve(ind+arr[ind], arr, vis, dp);
        vis[ind]=false;
        dp[ind]= ans;
        return ans;
    }
public:
    bool canReach(vector<int>& arr, int start) {
        int n= arr.size();

        vector<int>dp(n, -1);
        vector<bool>vis(n, false);
        return solve(start, arr, vis, dp);
    }
};

// 19 min