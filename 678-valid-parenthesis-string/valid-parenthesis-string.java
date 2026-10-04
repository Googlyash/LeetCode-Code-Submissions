// POTD Oct'4, 2026
// Oct'4, 2026 11:32 pm

class Solution {
    boolean solve(int i, int l, int r, String s, int[][] dp){
        int n= s.length();

        if(l<r){
            return false;
        }
        if(i>=n){
            return l==r;
        }
        if(dp[i][l-r]!=-1){
            return dp[i][l-r]==1;
        }
        char c= s.charAt(i);
        boolean ans= false;
        if(c=='('){
            ans |= solve(i+1, l+1, r, s, dp);
        }
        else if (c==')'){
            ans|= solve(i+1, l, r+1, s, dp);
        }
        else if(c=='*'){
            ans|= solve(i+1, l, r, s, dp);
            ans|= solve(i+1, l+1, r, s, dp);
            ans|= solve(i+1, l, r+1, s, dp);
        }
        dp[i][l-r]= ans ? 1 : 0;
        return ans;
    }
    public boolean checkValidString(String s) {
        int n= s.length();

        int[][] dp= new int[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                dp[i][j]=-1;
            }
        }
        return solve(0, 0, 0, s, dp);
    }
}

// 18 min