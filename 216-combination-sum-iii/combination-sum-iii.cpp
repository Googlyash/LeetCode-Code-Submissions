// Jan'16, 2025 04:36 pm

class Solution {
    void solve(int k, int n, int pre, vector<vector<int>>&ans, vector<int>&v){
        if(n==0){
            if(k==0)ans.push_back(v);
            return ;
        }

        for(int i=pre+1;i<10 && i<=n;i++){
            v.push_back(i);
            solve(k-1, n-i, i, ans, v);
            v.pop_back();
        }

        return;
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;

        vector<int>v;
        solve(k, n, 0, ans, v);
        return ans;
    }
};

// 7 min