// POTD Mar'2, 2025
// Mar'2, 2025 06:18 pm

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int>mp;
        vector<vector<int>>ans;

        for(auto it:nums1){
            mp[it[0]]+= it[1];
        }
        for(auto it:nums2){
            mp[it[0]]+= it[1];
        }
        for(auto it:mp){
            ans.push_back({it.first, it.second});
        }

        return ans;
    }
};

// 2 min