// Mar'17, 2026 09:20 pm
// DP Practice

class Solution {
    bool breakHelper(int cur, vector<int>&dp, string s, vector<string>& wordDict){
        int n= s.size();
        if(cur == n){
            return true;
        }

        if(dp[cur]!=-1){
            return dp[cur];
        }
        for(auto word: wordDict){
            int curN= word.size();
            if(n>= cur+ curN){
                int i=0;
                for(i=0;i<curN; i++){
                    if(word[i]!= s[i+cur]){
                        break;
                    }
                }
                if(i==curN){
                    if(breakHelper(cur+curN, dp, s, wordDict)){
                        return dp[cur]= true;
                    }
                }
            }
        }
        return dp[cur]= false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int>dp(s.size()+1, -1);
        return breakHelper(0, dp, s, wordDict);
    }
};

// 8 min