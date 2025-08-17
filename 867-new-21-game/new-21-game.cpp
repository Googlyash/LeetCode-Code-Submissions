// POTD Aug'17, 2025
// Aug'18, 2025 12:28 am

class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if (k == 0 || n >= k - 1 + maxPts) return 1.0;

        vector<double> dp(maxPts, 0.0);
        dp[0] = 1.0;

        double windowSum = 1.0, result = 0.0;

        for (int i = 1; i <= n; i++) {
            double prob = windowSum / maxPts;

            if (i < k) {
                windowSum += prob;
            } else {
                result += prob;
            }

            if (i >= maxPts) {
                windowSum -= dp[i % maxPts];
            }

            dp[i % maxPts] = prob;
        }

        return result;
    }
};

// Comments

// class Solution {
//     double solve(int i, int cur, int n, int k, int maxPts, vector<double>&dp){
//         if(i >= k){
//             double ans= 1.0/((double)pow(maxPts, cur));
//             if(dp[i]==-1){
//                 return dp[i]= ans;
//             }
//             return dp[i]+= ans; 
//         }
//         if(dp[i]!=-1){
//             return dp[i];
//         }

//         double ans=0.0;
//         for(int j= 1; j<=maxPts; j++){
//             ans+= (solve(i+j, cur+1, n, k, maxPts, dp));
//         }

//         dp[i]= ans;
//         return ans;
//     }
// public:
//     double new21Game(int n, int k, int maxPts) {
//         if(n >= maxPts+k-1){
//             return 1.0;
//         }
//         vector<double>dp(k+maxPts, -1);

//         solve(0, 1, n, k, maxPts,dp);

//         double den= 0.0, num=0.0;
//         for(int i=k; i<=k+maxPts-1; i++){
//             if(i<=n){
//                 num+= dp[i];
//             }
//             den+= dp[i];
//             cout<<dp[i]<<" ";
//         }

//         // cout<<num<<" "<<den;
//         return ((num)/(den));
//     }
// };