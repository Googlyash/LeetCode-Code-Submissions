// POTD Feb'1, 2025
// Feb'1, 2025 03:13 pm

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]%2 == nums[i+1]%2){
                return false;
            }
        }
        return true;
    }
};

// 2 min