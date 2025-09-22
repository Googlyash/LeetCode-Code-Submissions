// Seo'22, 2025
// Sep'22, 2025 09:32 am

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=  nums.size();
        map<int, int>mp;

        for(auto it:nums){
            mp[it]++;
        }
        int ans=0;
        for(auto it:mp){
            ans= max(it.second, ans);
        }
        int ret= 0;
        for(auto it:mp){
            ret+= (it.second == ans) ? it.second : 0;
        }
        return ret;
    }
};

// 5 min