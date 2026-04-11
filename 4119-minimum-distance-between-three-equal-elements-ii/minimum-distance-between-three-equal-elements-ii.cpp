// POTD Apr'11, 2026
// Apr'12, 2026 01:25 am

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n= nums.size();

        unordered_map<int, vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int ans=1e8;
        for(auto it: mp){
            vector<int>cur= it.second;
            for(int i=0;i+2<cur.size();i++){
                ans= min(ans, (cur[i+2]-cur[i])*2);
            }
        }
        return ans<1e8 ? ans : -1;
    }
};

// 11 min