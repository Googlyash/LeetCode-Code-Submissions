//POTD Apr'24, 2024
//Apr'24, 2024 09:31 pm

class Solution {
public:
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }
        if(n<3){
            return 1;
        }
        vector<int>dp(n+1, 0);
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=n;i++){
            dp[i]= dp[i-1]+ dp[i-2]+ dp[i-3];
        }
        return dp[n];
    }
};

//3 min