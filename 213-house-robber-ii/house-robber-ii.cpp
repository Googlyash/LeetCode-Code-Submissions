//Oct'17, 2023 04:55 pm


class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int ans=0, pre=0, pre2=0;
        for(int i=0;i<n-1;i++){
            int cur=pre;
            pre=max(pre, pre2+nums[i]);
            pre2=cur;
        }
        ans=max(pre, pre2);
        pre=0, pre2=0;
        for(int i=1;i<n;i++){
            int cur=pre;
            pre=max(pre, pre2+nums[i]);
            pre2=cur;
        }
        ans=max({ans, pre, pre2});
        // ans=max(ans, nums[0]);
        return ans;
    }
};

//2min