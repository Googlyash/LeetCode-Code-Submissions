//POTD Aug'31, 2023
//Sept'1, 2023 09:11 pm
//Editorial


class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        // int n=ranges.size();
        int inf=1e9;

        vector<int>dp(n+1, inf);
        dp[0]=0;

        for(int i=0; i<=n; i++){
            int strt=max(0, i-ranges[i]);
            int end=min(n, i+ranges[i]);

            for(int j=strt;j<=end; j++){
                dp[end]=min(dp[end], dp[j]+1);
            }
        }
        if(dp[n]==inf){
            return -1;
        }
        return dp[n];
    }
};