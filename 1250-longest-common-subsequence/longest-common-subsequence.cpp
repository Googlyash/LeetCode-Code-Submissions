//Striver SDE Sheet
//Aug'5, 2023 05:37 pm
//Tabulation with space optimization

class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int n=s1.size(), m=s2.size(), ans=0;
        // vector<vector<int>>dp(n+1, vector<int>(m+1, 0));

        vector<int>pre(m+1, 0), cur(m+1, 0);
        for(int i=1;i<=n;i ++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    cur[j]= 1+pre[j-1];
                }
                else 
                cur[j]= max(pre[j], cur[j-1]);
            }
            pre=cur;
        }

        return pre[m];
    }
};