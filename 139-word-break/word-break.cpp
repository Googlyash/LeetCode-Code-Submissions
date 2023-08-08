//Striver: SDE Sheet
//Aug'8, 2023 09:02 pm

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size(), last=n-1;
        vector<int>dp(n+1, 0);
        dp[n]=1;
        for(int i=n-1; i>=0; i--){
            for(auto word: wordDict){
                if(i+ word.size()>n || s.substr(i, word.size())!=word)continue;
                dp[i]=dp[i+word.size()];
                if(dp[i]==1)break;
            }
        }
        return dp[0];
    }
};