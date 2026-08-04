// POTD Aug'4, 2026
// Aug'4, 2026 09:56 pm

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int, int>mp;
        int mn= 1e5, mx=0;
        for(auto it: nums){
            mp[it]++;
            mx= max(mx, it);
            mn= min(mn, it);
        }
        vector<int>ans;
        for(int i=mn;i<mx+1;i++){
            if(!mp[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// 3 min