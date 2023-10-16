//POTD Oct'15, 2023
//Oct'16, 2023 05:38 pm
class Solution {
int mod=1e9+7;
private:
    int solve(int i, int cur, int arrLen, int steps, map<pair<int, int>, int>&dp){
        if(cur==steps){
            return i==0;
        }
        if(i<0 || i>=arrLen){
            return 0;
        }
        if(dp.find({cur, i})!=dp.end()){
            return dp[{cur, i}];
        }
        int l=0, r=0, stay=0;
        l=(solve(i-1, cur+1, arrLen, steps, dp))%mod;
        r=(solve(i+1, cur+1, arrLen, steps, dp))%mod;
        stay=(solve(i, cur+1, arrLen, steps, dp))%mod;

        return dp[{cur, i}]=((l+r)%mod+stay)%mod;
    }
public:
    int numWays(int steps, int arrLen) {
        map<pair<int, int>, int>dp;
        int ans=solve(0, 0, arrLen, steps, dp);
        return ans;
    }
};

//Comments
//40 min