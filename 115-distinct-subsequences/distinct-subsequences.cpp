//Nov'17, 2023 07:03 pm

class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.size(), m=t.size(), mod=1e9+7;
        vector<int>pre(m+1, 0);
        pre[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=m;j>=1;j--){
                if(s[i-1]==t[j-1]){
                    pre[j]= (pre[j-1]+ pre[j])%mod;
                }
            }
        }
        return pre[m];
    }
};

// 3 min: Self and Striver