//Striver SDE Sheet day 4
//Aug'13, 2023 07:33 pm

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size(), mx=0;
        map<int, int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=mp[nums[i]-1]+1;
        }
        for(auto it:mp){
            mx=max(mx, it.second);
        }
        return mx;
    }
};