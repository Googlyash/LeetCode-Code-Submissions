//Self-solved
//But using O(n) space

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        unordered_map<int,pair<int,int>>mp;
        for(int i=0;i<n; i++){
            mp[target-nums[i]]={1,i};
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]].first>0){
                v.push_back(i+1);
                v.push_back(mp[nums[i]].second+1);
                return v;
            }
        }
        return {-1,-1};
    }
};