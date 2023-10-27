//Oct'27, 2023 06:55 pm

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n+1, vector<int>(n+1, 0));
        for(int i=n-1;i>=0;i--){
            dp[n-1][i]=triangle[n-1][i];
            // cout<<dp[n-1][i]<<" ";
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                dp[i][j]=min(dp[i+1][j], dp[i+1][j+1])+triangle[i][j];
            }
        }
        return dp[0][0];
    }
};

//6 min