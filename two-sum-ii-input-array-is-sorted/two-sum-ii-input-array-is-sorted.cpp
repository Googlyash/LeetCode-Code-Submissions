//Self-solved
//Comments ;-;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        vector<int>v;
        for(int i=0;i<n; i++){
            if(nums[l]+nums[r]==target){
                return {l+1,1+r};
            }
            else if(nums[l]+nums[r]<target)
            {
                l++;
            }
            else{
                r--;
            }
        }
        return {-1,-1};
    }
};