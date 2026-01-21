// POTD Jan'21, 2026
// Jan'21, 2026 09:52 pm

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n= nums.size();

        vector<int>ans;
        for(auto it: nums){
            if(it==2){
                ans.push_back(-1);
                continue;
            }
            ans.push_back(it - ((it+1) & (-it -1))/2);
        }
        return ans;
    }
};

// Comments