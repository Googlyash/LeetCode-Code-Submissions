//Aug'31 2023 07:24 pm

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int last=n, i=n-1, cur=n;
        for(int i=n-1;i>=0;i--){
            if(i+1+nums[i]>=last){
                last=i+1;
            }
        }
        return last<2;
    }
};