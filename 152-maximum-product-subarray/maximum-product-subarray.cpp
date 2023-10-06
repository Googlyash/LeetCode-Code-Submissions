class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(), ans=nums[0];
        int pre=1, suf=1;
        for(int i=0;i<n;i++){
            if(pre==0)pre=1;
            if(suf==0)suf=1;
            pre*=nums[i],suf*=nums[n-1-i];
            ans=max(ans, max(pre, suf));
        }
        return ans;
    }
};