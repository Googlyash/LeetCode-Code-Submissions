// POTD Apr'3, 2025
// Apr'3, 2025 10:26 pm

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long ans=0, sum=0;
        vector<long long>pre(n+1, 0), suf(n+1, 0);
        for(int i=0;i<n;i++){
            pre[i+1]=max(pre[i],(long long) nums[i]);
        }
        for(int i=n-1; i>=0; i--){
            suf[i]=max(suf[i+1],(long long) nums[i]);
        }
        for(int i=1;i<n-1;i++){
            sum=(pre[i]-nums[i])*suf[i+1];
            ans=max(ans, sum);
        }
        return ans;
    }
};
