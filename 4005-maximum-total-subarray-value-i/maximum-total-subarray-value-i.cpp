// POTD Jun'9, 2026
// Jun'10, 2026 12:08 am

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n= nums.size();

        long long ans=0;
        int mn= nums[0], mx=nums[0];
        for(int i=1;i<n;i++){
            mx= max(mx, nums[i]);
            mn= min(mn, nums[i]);
        }
        ans= mx-mn;
        ans*=k;
        return ans;
    }
};

// 5 min