//POTD Oct'14, 2023
//Oct'14, 2023 05:44 pm
class Solution {
private:
    int solve(vector<int>&cost, vector<int>&time, int cur, vector<vector<int>>&dp, int rem){
        if(rem<=0){
            return 0;
        }
        if(cur>=cost.size()){
            return 1e9;
        }

        if(dp[cur][rem]!=-1){
            return dp[cur][rem];
        }
        int take=cost[cur]+solve(cost, time, cur+1, dp, rem-time[cur]-1);
        int nottake= solve(cost, time, cur+1, dp, rem);

        return dp[cur][rem]= min(take, nottake);
    }
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n=cost.size();
        vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        return solve(cost, time, 0, dp, n);
        // vector<long>dp(n+1, INT_MAX);
        // dp[0]=0;
        // for(int i=0;i<n;i++){
        //     for(int j=n;j>=0;j--){
        //         dp[j]=min(dp[j], dp[max(j-time[i]-1, 0)]+cost[i]);
        //     }
        // }
        // return dp[n];
    }
};

//Comments