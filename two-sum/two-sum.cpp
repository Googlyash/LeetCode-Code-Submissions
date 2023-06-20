class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[target-nums[i]]=i+1;
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>0 && mp[nums[i]]-1!=i){
                return {i,mp[nums[i]]-1};
            }
        }
        return {-1,-1};
    }
};