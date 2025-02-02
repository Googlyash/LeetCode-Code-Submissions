// POTD Feb'2, 2025
// Feb'2, 2025 10:05 pm

class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        if(n==0){
            return true;
        }

        int drop=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                drop++;
            }
        }
        if(nums[n-1]>nums[0]){
            drop++;
        }


        return drop<=1 ? true : false;
    }
};

// 3 min