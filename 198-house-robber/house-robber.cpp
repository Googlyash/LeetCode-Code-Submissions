//Oct'17, 2023 04:37 pm

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int pre=0, pre2=0;
        for(int i=0;i<n;i++){
            int cur=max(pre, pre2+nums[i]);
            pre2=pre;
            pre=cur;
        }
        return max(pre, pre2);
    }
};

//5:30 min