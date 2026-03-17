// Mar'17, 2026 08:56 pm
// DP Practice

class Solution {
    int solve(int i, int amount, vector<int>&v, set<vector<int>>&st, vector<int>&coins, vector<vector<int>>&dp){
        int n= coins.size();
        if(amount<=0 || i==n){
            if(amount==0){
                // for(auto it:v)cout<<it<<" ";
                // cout<<endl;
                return 1;
            }
            return 0;
        }

        if(dp[i][amount]!=-1){
            return dp[i][amount];
        }

        int ans=0;
        // Not take
        ans+= solve(i+1, amount, v, st, coins, dp);
        // take
        if(amount>= coins[i]){
            v.push_back(coins[i]);
            ans+= max(solve(i, amount-coins[i], v, st, coins, dp), solve(i+1, amount-coins[i], v, st, coins, dp));
            v.pop_back();
        }
        return dp[i][amount]= ans;
    }
public:
    int change(int amount, vector<int>& coins) {
        int n= coins.size();

        vector<int>v;
        set<vector<int>>st;
        vector<vector<int>>dp(n+1, vector<int>(amount+1, -1));
        return solve(0, amount, v, st, coins, dp);
        // return st.size();
    }
};

// 17 min