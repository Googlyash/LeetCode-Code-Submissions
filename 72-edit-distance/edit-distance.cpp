//Aug'7,2023 06:20 pm
//Self 
//Recursion with memoization

class Solution {
private:
    int f(int i, int j, string &s1, string &s2, vector<vector<int>>&dp){
        if(j==0)return i;
        if(i==0)return j;

        if(dp[i][j]!=-1)return dp[i][j];
        int take= 1e9;
        if(s1[i-1]==s2[j-1]){
            take= 0+f(i-1, j-1, s1, s2, dp);
        }
        int nottake= 1+ min(f(i-1, j-1, s1, s2, dp), min(f(i, j-1, s1, s2, dp), f(i-1, j, s1, s2, dp)));
        return dp[i][j]=min(take, nottake);
    }
public:
    int minDistance(string s1, string s2) {
        int n=s1.size(), m=s2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return f(n, m, s1, s2, dp);
    }
};

