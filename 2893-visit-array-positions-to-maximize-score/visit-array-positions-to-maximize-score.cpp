//Sep'12, 2023 01:2 pm
#define ll long long
class Solution {
private:
    long long solve(ll par, ll i, vector<int>&nums, int x, vector<vector<ll>>&dp){
        if(i==nums.size()){
            return 0;
        }

        if(dp[i][par]!=-1){
            return dp[i][par];
        }
        ll nottake= solve(par, i+1, nums, x, dp);
        cout<<par<<" ";
        ll take=nums[i];
        if(nums[i]%2 !=par){
            take-=x;
        }
        take+= solve( (nums[i]%2) , i+1, nums, x, dp);
        // cout<<nums[i]<<endl;
        return dp[i][par]=max(take, nottake);
    }
public:
    long long maxScore(vector<int>& nums, int x) {
        int n=nums.size();
        ll ans=nums[0];
        ll par=nums[0]%2;
        vector<vector<ll>>dp(n+1, vector<ll>(2, -1));
        ans+=solve(par, 1, nums, x, dp);
        return ans;
        return ans;
    }
};

//Self- 31 Min