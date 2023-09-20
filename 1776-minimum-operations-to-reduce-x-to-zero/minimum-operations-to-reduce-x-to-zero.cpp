//POTD Sep'20, 2023
//Sep'20, 2023 02:52 pm
//Comments: 51min

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int l=0, r=0;
        int ans=-1, sum=0, cursum=0;
        for(auto it:nums){
            sum+=it;
        }
        while(r<n ){
            cursum+=nums[r];
            while(l<=r && cursum>sum-x){
                cursum-=nums[l++];
            }
            if(cursum==sum-x){
                ans=max(ans, r-l+1);
            }
            r++;
        }
        return (ans==-1)?-1: n-ans;
    }
};