//Striver's solution
//Aug'4, 2023 12:40 am

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int ans=nums[0], n=nums.size(), l=0, r=0;
        int pre=1, suf=1;
        for(int i=0;i<n;i++){
            if(pre==0)pre=1;
            if(suf==0)suf=1;
            pre*=nums[i];
            suf*=nums[n-1-i];
            ans=max(ans,max(pre, suf));
        }
        return ans;
    }
};