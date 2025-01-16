// Jan'16, 2025 01:22 pm

class Solution {
public:
    int minDistance(string word1, string word2) {
        int n= word1.size(), m=word2.size();

        // return solve(n-1, m-1, word1, word2);

        vector<vector<int>> dp(n+1, vector<int>(m+1, 1e9));

        for(int i=0;i<=n;i++){
            dp[i][0]= i;
        }

        for(int j=0;j<=m;j++){
            dp[0][j]= j;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ans=1e9;
                if(word1[i]==word2[j]){
                    ans= min(ans, dp[i][j]);
                }
                else {
                    // Replace
                    ans= min(1 + dp[i][j], ans);

                    // Delete
                    ans= min(ans, 1 +  dp[i][j+1] );

                    // Insert
                    ans= min(ans, 1 + dp[i+1][j] );
                }

                dp[i+1][j+1]= ans;
            }
        }
        return dp[n][m];
    }
};


// 30 min

//Recursion One
    // int solve(int i, int j, string w1, string w2){
    //     if(j<0){
    //         return i+1;
    //     }
    //     if(i<0){
    //         return 1e9;
    //     }

    //     int ans=1e9;
    //     if(w1[i]==w2[j]){
    //         ans= min(ans, solve(i-1, j-1, w1, w2));
    //     }
    //     else {
    //         // Replace
    //         ans= min(ans, 1 + solve(i-1, j-1, w1, w2));

    //         // Delete
    //         ans= min(ans, 1 + solve(i-1, j, w1, w2));

    //         // Insert
    //         ans= min(ans, 1 + solve(i, j-1, w1, w2));
    //     }

    //     cout<<i<<" "<<j<<" "<<ans<<endl;
    //     return ans;
    // }