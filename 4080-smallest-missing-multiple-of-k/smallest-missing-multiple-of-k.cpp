// POTD Aug'25, 2026
// Aug'25, 2026 02:42 pm

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n= nums.size();

        ranges::sort(nums);
        int ans=k, cur=k;
        for(int i=0;i<n;i++){
            while(i<n && cur>nums[i]){
                i++;
            }
            if(i==n || cur<nums[i]){
                return cur;
            }
            if(cur==nums[i]){
                cur+=k;
            }
        }
        return cur;
    }
};

// 3 min