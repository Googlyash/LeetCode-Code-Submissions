// POTD Jul'30, 2025
// Jul'30, 2025 10:42 pm

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n= nums.size();
        int mx=nums[0];
        
        for(auto it:nums){
            mx= max(it, mx);
        }
        int ans=0, cur=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=mx){
                cur=0;
            }
            else {
                cur++;
            }
            ans= max(ans, cur);
        }
        return ans;
    }
};

// 5 min