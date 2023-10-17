//Oct'17, 2023 06:18 pm

class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& g) {
        vector<int>dp(n+1, 1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(g[i]!=g[j] && words[i].size()==words[j].size()){
                    int c=0;
                    for(int k=0;k<words[i].size();k++){
                        c+= words[i][k]!=words[j][k];
                    }
                    if(c==1){
                        dp[i]=max(dp[i], dp[j]+1);
                    }
                }
            }
        }
        int mx=0, id=0;
        for(int i=0;i<n;i++){
            if(mx<dp[i]){
                mx=dp[i];
                id=i;
            }
            cout<<dp[i]<<" ";
        }
        int cur=dp[id]-1;
        vector<string>ans;
        ans.push_back(words[id]);
        for(int i=id-1;i>=0;i--){
            if(dp[i]==cur && g[i]!=g[id] && words[i].size()==words[id].size()){
                int c=0;
                for(int k=0;k<words[i].size();k++){
                    c+=words[i][k]!=words[id][k];
                }
                if(c==1){
                    ans.push_back(words[i]);
                    cur--;
                    id=i;
                }
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
