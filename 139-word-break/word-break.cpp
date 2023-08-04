//Aug'4, 2023 06:27 pm

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        string s1;
        int n=s.size(), m=wordDict.size(), last=0, temp=0;
        vector<bool>dp(n+1, false);
        dp[n]=true;
        for(int i=n-1;i>-1; i--){
            for(auto w:wordDict){
                if(i+ w.size()<=n && s.substr(i, w.size())==w){
                    dp[i]=dp[i+w.size()];
                }
                if(dp[i])break;
            }
        }
        return dp[0];
    }
};

//NeetCode youtube solution