//Aug'7,2023 06:20 pm
//Self 
//Tabulation

class Solution {
public:
    int minDistance(string s1, string s2) {
        int n=s1.size(), m=s2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

        for(int i=0;i<=n;i++){
            dp[i][0]=i;
        }
        for(int j=0;j<=m;j++){
            dp[0][j]=j;
        }
        for(int i=1;i<=n; i++){
            for(int j=1;j<=m; j++){
                int take= 1e8;
                if(s1[i-1]==s2[j-1]){
                    take= 0+dp[i-1][j-1];
                }
                int nottake= 1+ min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j]));
                dp[i][j]=min(take, nottake);
            }
        }
        return dp[n][m];
    }
};

