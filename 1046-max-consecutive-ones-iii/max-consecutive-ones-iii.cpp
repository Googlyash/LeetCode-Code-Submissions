// Jan'16, 2025 07:20 pm

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(), ans=0, cnt=0;
        int l=0, r=0;
        while(r<n){
            if(nums[r++]==0){
                cnt++;
            }
            while(cnt>k){
                if(nums[l++]==0){
                    cnt--;
                }
            }
            ans= max(ans, r-l);
        }
        return ans;
    }
};

// 5 min