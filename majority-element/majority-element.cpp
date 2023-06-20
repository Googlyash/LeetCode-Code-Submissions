//Striver day3
//Self
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int idx=0,mx=0,allmx=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                if(mx>allmx){
                    allmx=mx;
                    idx=i-1;
                }
                mx=0;
            }
            mx++;
        }
        if(mx>allmx){
            allmx=mx;
            idx=nums.size()-1;
        }
        return nums[idx];
    }
};