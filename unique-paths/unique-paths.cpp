//Striver day3
//Striver- O(n) space and O(n) Time
//Earlier Self Solved

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>dp(n,0);
        for(int i=0;i<m;i++){
            vector<int>curr(n,0);
            for(int j=0;j<n;j++){
                if(i==0 || j==0)curr[j]=1;
                else {
                    curr[j]=curr[j-1]+dp[j];
                }
            }
            dp=curr;
        }
        // for(int i=0;i<m;i++)dp[i][0]=1;
        // for(int i=0;i<n;i++)dp[0][i]=1;
        // for(int i=1;i<m;i++){
        //     for(int j=1;j<n;j++){
        //         dp[i][j]=dp[i-1][j]+dp[i][j-1];
        //     }
        // }
        return dp[n-1];
    }
};