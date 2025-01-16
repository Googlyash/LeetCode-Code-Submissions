// Jan'16, 2025 12:27 pm

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto it:nums){
            ans^= it;
        }

        return ans;
    }
};

// 1 min