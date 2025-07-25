// POTD Jul'25, 2025
// Jul'25, 2025 08:07 pm

class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int>mp;
        int ans=0, cnt=0, mx= INT_MIN;
        for(auto it:nums){
            if(mp[it]==0 && it>0){
                ans+=it;
            }
            mp[it]++;
            mx= max(it, mx);
            if(it<0){
                cnt++;
            }
        }

        if(cnt==n){
            return mx;
        }
        return ans;
    }
};

// 3 min