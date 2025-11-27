// POTD Nov'27, 2025
// Nov'28, 2025 01:57 am

class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        const int n=nums.size();
        vector<long long> minS(k, LLONG_MAX/2);
        long long prefix=0, ans=LLONG_MIN;
        minS[k-1]=0;
        for(int i=0; i<n; i++){
            prefix+=nums[i];
            long long& ksum=minS[i%k];
            ans=max(ans, prefix-ksum);
            ksum=min(prefix, ksum);  
        }
        return ans;
        
    }
};

// Comments