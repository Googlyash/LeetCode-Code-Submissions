// POTD Jul'22, 2025
// Jul'23, 2025 12:27 am

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n= nums.size();
        int l=-1, r=0;
        long ans=nums[0];
        map<int, int>mp;

        vector<long>pre(n+1, 0);
        while(r<n){
            if(mp[nums[r]]> max(0,l)){
                l= mp[nums[r]]-1;
            }
            pre[r+1]= pre[r]+ nums[r];
            ans= max(pre[r+1]-pre[l+1], ans);
            mp[nums[r]]= r+1;
            r++;
        }
        return (int)ans;
    }
};

// 18 min