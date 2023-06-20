//Striver day3
//Comments
//Self
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int idx=nums.size()/2,mx=0,allmx=0;
        for(int i=nums.size()/2;i<nums.size();i++){
            if(nums[i]==nums[nums.size()/2])idx=i;
        }
        return nums[idx];
    }
};