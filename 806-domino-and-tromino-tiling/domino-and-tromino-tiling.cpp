// POTD May'5, 2025
// May'5, 2025 10:46 pm

class Solution {
    int solve(int i, int n, bool prevGap){
        int mod= 1e9+7;
        if(i>n){
            return 0;
        }
        if(i==n){
            return !prevGap;
        }

        if(prevGap){
            return (solve(i+1, n, false)+ solve(i+1, n, true))%mod;
        }
        else {
            return (solve(i+1, n, false)+ solve(i+2, n, false)+ 2*solve(i+2, n, true))%mod;
        }
    }
public:
    int numTilings(int n) {
        // vector<vector<int>>dp 
        // return solve(0, n, false);

        int mod= 1e9+7;
        vector<long long>dpt(n+1, 0), dpf(n+1, 0);
        dpf[n]=1;

        for(int i=n-1; i>=0; i--){
            dpt[i]= (dpf[i+1]+ dpt[i+1])%mod;
            dpf[i]= (dpf[i+1] )%mod;
            if(i<n-1){
                dpf[i]+= dpf[i+2]+ 2ll*dpt[i+2];
                dpf[i]%=mod;
            }
        }

        return dpf[0];
    }
};

// Comments
// 01 hour 08 min
