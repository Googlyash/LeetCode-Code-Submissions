// POTD Feb'5, 2026
// Feb'6, 2026 01:24 am

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n= nums.size();

        vector<int>result(n, -101);
        for(int i=0;i<n;i++){
            result[i]= nums[(n*101+i+nums[i])%n];
        }
        return result;
    }
};

// 5 min