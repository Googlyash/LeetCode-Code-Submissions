// POTD Aug'2, 2026
// Aug'2, 2026 10:56 pm

class Solution {
    int solve(int i, int j, int dir, vector<int>&piles, vector<vector<int>>&dp){
        if(dp[i][j]!=-1e5){
            return dp[i][j];
        }
        if(j-i<1){
            return dir*piles[i];
        }

        int l= dir*piles[i]+ solve(i+1, j, 0-dir, piles, dp);
        int r= dir*piles[j]+ solve(i, j-1, 0-dir, piles, dp);
        if(dir==1){
            dp[i][j]= max(l, r);
        }
        else {
            dp[i][j]= min(l, r);
        }
        return dp[i][j];
    }
public:
    bool stoneGame(vector<int>& piles) {
        int n= piles.size();
        vector<vector<int>>dp(n+1, vector<int>(n+1, -1e5));

        int ans= solve(0, n-1, 1, piles, dp);
        return ans>0;
    }
};

// 19 min