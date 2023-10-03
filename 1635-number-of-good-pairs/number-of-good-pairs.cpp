//POTD Oct'3, 2023 
//Oct'3, 2023 03:07 pm

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            ans+=(it.second*(it.second-1))/2;
        }
        return ans;
    }
};