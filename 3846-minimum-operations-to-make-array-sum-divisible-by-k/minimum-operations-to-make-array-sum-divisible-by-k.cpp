// POTD Nov'29,2025
// Nov'30, 2025 01:45 am

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n= nums.size();
        int sum=0;
        for(auto it:nums){
            sum+= it;
        }
        return sum%k;
    }
};

// 2 min