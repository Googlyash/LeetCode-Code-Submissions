// Jan'16. 2025 07:12 pm

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size(), ans=0, pre=0, cur=0;

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cur++;
            }
            else {
                ans= max(ans, pre+cur);
                pre=cur, cur=0;
            }
        }
        ans= max(ans, pre+cur);

        return min(ans, n-1);
    }
};

// 02 min