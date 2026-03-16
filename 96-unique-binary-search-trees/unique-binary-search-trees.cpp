// Mar'16, 2026 10:18 pm

class Solution {
public:
    int numTrees(int n) {
        // int mod= 1e9+7;
        vector<long long>ans(n+1, 1);
        for(int i=2;i<=n;i++){
            ans[i]=0;
            for(int j=1;j<=i;j++){
                ans[i]+= ans[i-j]*ans[j-1];
            }
        }
        return ans[n];
    }
};

// Comments
// 9 min