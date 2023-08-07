//Aug'7, 2023 07: pm
//Recursion with memoization

class Solution {
private:
    int f(int i, int tot, vector<int>&a, vector<vector<int>>&dp){
        if(tot==0)return 0;
        if(i<0 || tot<0)return 1e8;

        if(dp[i][tot]!=-1) return dp[i][tot];
        int nottake= 0+ f(i-1, tot, a, dp);
        int take=1e9, mod=1e9+7, temp=tot;
        if(a[i]<=temp ){
            temp-=a[i];
            take= min(take, 1+(f(i, temp, a, dp))%mod);
        }
        return dp[i][tot]=min( take, nottake);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1, vector<int>(amount+1, -1));
        int ans=f(n-1, amount, coins, dp);
        if(ans>= 1e8)return -1;
        return  ans;
    }
};