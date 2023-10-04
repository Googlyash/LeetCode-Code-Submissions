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
        int n=s.size();
        vector<int>dp(n+1, 0);
        if(s[0]=='0'){
            return 0;
        }
        dp[n]=1;
        for(int i=n-1; i>=0; i--){
            long long ans= dp[i+1];
            if(i<n-1 ){
                if(s[i]=='1' || (s[i]=='2' && s[i+1]<'7')){
                    ans+=dp[i+2];
                    if(s[i+1]=='0' || (i<n-2 &&s[i+2]=='0'))ans=dp[i+2];
                }
                else if(s[i+1]=='0'){
                    return 0;
                }
            }
            dp[i]=ans;
        }
        // for(int i=0;i<n;i++){
        //     cout<<"i= "<<dp[i]<<endl;
        // }
        return dp[0];
    }
};

//Self: 34 min