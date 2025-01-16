// Jan'16, 2025 03:43 pm

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n =text1.size(), m= text2.size();

        // return solve(n, m, text1, text2);

        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int nottake= max( dp[i-1][j-1], max( dp[i][j-1], dp[i-1][j]));
                int take=0;
                if(text1[i-1]== text2[j-1]){
                    take= 1 + dp[i-1][j-1];
                }

                dp[i][j]= max(take, nottake);
            }
        }

        return dp[n][m];
    }
};

// 9 min

// Recursion
    // int solve(int i, int j, string t1, string t2){
    //     if(i==0 || j==0){
    //         return 0;
    //     }

    //     int nottake= max(solve(i-1, j-1, t1, t2), max(solve(i, j-1, t1, t2), solve(i-1, j, t1, t2)));
    //     int take=0;
    //     if(t1[i-1]== t2[j-1]){
    //         take= 1 + solve(i-1, j-1, t1, t2);
    //     }

    //     return max(take, nottake);
    // }