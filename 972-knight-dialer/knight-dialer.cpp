//POTD Nov'27,2023
//Npv'23, 2023 02:12 pm

class Solution {
    int solve(int i, int j, int n, vector<vector<int>>&dp){
        if(!n || (i==1 && j==1)){
            return 1;
        }

        if(i==3 && j==1 && dp[n][0]!=-1){
            return dp[n][0];
        }
        if(i<3 && dp[n][i*3+j+1]!=-1){
            return dp[n][i*3+j+1];
        }
        vector<pair<int, int>>d={{2,1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
        long long ans=0, mod=1e9+7;
        for(auto it:d){
            int x=i+ it.first;
            int y=j+ it.second;

            if((min(x,y)>=0 && max(x,y)<3)|| (x==3 && y==1)){
                ans+= solve(x, y, n-1, dp)%mod;
                ans%=mod;
            }
        }
        // ans=max(ans, 1);
        return dp[n][i*3+j+1]= ans%mod;
    }
public:
    int knightDialer(int n) {
        long long ans=0, mod=1e9+7;
        vector<vector<int>>dp(n+1, vector<int>(15, -1));
        for(int i=0;i<3;i++){
            for(int j=0; j<3;j++){
                ans+=solve(i, j, n-1, dp)%mod;
                ans%=mod;
            }
        }
        ans+=solve(3, 1, n-1, dp)%mod;
        if(n>=2)ans--;
        return ans%mod;
    }
};

//36 mins (Misunderstood ques)