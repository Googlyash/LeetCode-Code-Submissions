// POTD Jan'8, 2025
// Jan'9, 2025 01:28 am

class Solution {
    int solve(int i, int j, vector<int>&nums1, vector<int>&nums2, vector<vector<int>>&dp){
        int n= nums1.size(), m= nums2.size();
        if(i>= n || j>=m){
            return -1e7;
        }
        if(dp[i][j]>=-1e6){
            return dp[i][j];
        }
        int cur= nums1[i] * nums2[j] + max(0, solve(i+1, j+1, nums1, nums2, dp));
        int rest= max({solve(i+1, j, nums1, nums2, dp), solve(i, j+1, nums1, nums2, dp)});
        return dp[i][j]= max(cur, rest);
    }
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size(), m= nums2.size();
        vector<vector<int>>dp(n, vector<int>(m, -1e7));
        return solve(0, 0, nums1,  nums2, dp);
    }
};

// 35 min