// POTD Aug'15, 2026
// Aug'16, 2026 12:43 am

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n= nums.size();

        map<int, int>mp;
        int mx=1;
        int cur=nums[0];
        mp[cur]++;
        for(int i=1;i<n;i++){
            mp[nums[i]]++;
            cur^=nums[i];
        }
        if(cur){
            return n;
        }
        if(!cur && mp[0]==n){
            return 0;
        }
        return n-1;
    }
};

// 7 min