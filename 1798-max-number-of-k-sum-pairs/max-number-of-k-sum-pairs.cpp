//Sep'11, 2023 05:15 pm
//Earlier Self-Solved
//Comments- Better Time Complexity

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int l=0, r=n-1, ans=0;
        while(l<r){
            if(nums[l]+nums[r]==k){
                ans++;
                l++;
                r--;
            }
            else if(nums[l]+nums[r]>k )r--;
            else l++;
        }
        return ans;
    }
};