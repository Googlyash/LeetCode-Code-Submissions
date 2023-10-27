//Oct'27, 2023 05:53 pm

class Solution {
int solve(string &r, string&s, int i, int j, vector<vector<int>>&dp){
    if(i<0 || j<0){
        return 0;
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(r[i]==s[j]){
        return dp[i][j]= 1+solve(r, s, i-1, j-1, dp);
    }
    else {
        return dp[i][j]= max(solve(r, s, i-1, j, dp), solve(r, s, i, j-1, dp));
    }
}
public:
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        string r=s;
        reverse(s.begin(), s.end());
        return solve( r, s, n-1, n-1, dp);
    }
};

//Comments: 6 min