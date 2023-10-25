//Oct'25, 2023 05:53 pm

#define ll long long
class Solution {
private:
    ll solve(vector<vector<int>>&rides, int cur, vector<ll>&dp){
        if(cur>=rides.size()){
            return 0;
        }
        if(dp[cur]!=-1){
            return dp[cur];
        }

        long long nottake=solve(rides, cur+1, dp);
        ll take=LLONG_MIN;
        int l=cur+1, r=rides.size()-1, next=rides.size();
        while(l<=r){
            int mid=l+(r-l)/2;

            if(rides[mid][0]>=rides[cur][1]){
                next=mid;
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        take= rides[cur][2]+rides[cur][1]-rides[cur][0]+ solve(rides, next, dp);
        // cout<<take<<" "<<nottake<<endl;
        return dp[cur]=max(take, nottake);
    }
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        sort(rides.begin(), rides.end());
        vector<ll>dp(rides.size()+5, -1);
        return solve(rides, 0, dp);
    }
};

//Comments: 44 min