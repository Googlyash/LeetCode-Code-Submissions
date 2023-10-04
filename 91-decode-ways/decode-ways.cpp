//Oct'4, 2023 06:14 pm
class Solution {
private:
    long long solve(int i, string &s, vector<int>&dp){
        if(i== s.size()){
            return 1;
        }

        if(dp[i]!=-1){
            return dp[i];
        }
        if(s[i]=='0'){
            return 0;
        }
        long long ans= solve(i+1, s, dp);
        if(i<s.size()-1 ){
            if(s[i]=='1' || (s[i]=='2' && s[i+1]<'7')){
                ans+=solve(i+2, s, dp);
                if(s[i+1]=='0')ans=solve(i+2, s, dp);
            }
            else if(s[i+1]=='0'){
                ans=0;
            }
        }
        return dp[i]=ans;
    }
public:
    int numDecodings(string s) {
        long long ans=1;
        int n=s.size();
        vector<int>dp(n, -1);
        if(s[0]=='0'){
            return 0;
        }
        return solve(0, s, dp);
        
        // dp[0][0]=1;
        // for(int i=1;i<n;i++){
        //     if(s[i+1]=='0'){
        //         dp[i][0]=0;
        //         dp[i][1]=dp[i-1][0];
        //     }
        //     else {
        //         dp[i][0]=dp[i-1][0];
        //         if(s[i]<='1' || (s[i-1]=='2' && s[i]<'7')){
        //             dp[i][1]=dp[i-1][0]+1;
        //         }
        //     }
        // }
        // return dp[n-1][0]+dp[n-1][1];
    }
};

//Self: 34 min