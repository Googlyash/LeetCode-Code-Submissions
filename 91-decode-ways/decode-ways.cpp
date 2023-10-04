//Oct'4, 2023 06:14 pm
class Solution {
// private:
//     long long solve(int i, string &s, vector<int>&dp){
//         if(i== s.size()){
//             return 1;
//         }

//         if(dp[i]!=-1){
//             return dp[i];
//         }
//         if(s[i]=='0'){
//             return 0;
//         }
//         long long ans= solve(i+1, s, dp);
//         if(i<s.size()-1 ){
//             if(s[i]=='1' || (s[i]=='2' && s[i+1]<'7')){
//                 ans+=solve(i+2, s, dp);
//             }
//         }
//         return dp[i]=ans;
//     }
public:
    int numDecodings(string s) {
        int n=s.size();
        // vector<int>dp(n+1, -1);
        // return solve(0, s, dp);
        vector<int>dp(n+1, 0);
        if(s[0]=='0'){
            return 0;
        }
        dp[n]=1;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='0'){
                dp[i]=0;
            }
            else {
                dp[i]=dp[i+1];
                if(i<n-1 && (s[i]=='1' || (s[i]=='2' && s[i+1]<'7'))){
                    dp[i]+=dp[i+2];
                }
            }
        }
        return dp[0];
    }
};

//Self: 34 min