// POTD May'29, 2026
// May'30, 2026 01:29 am

class Solution {
public:
    int minElement(vector<int>& nums) {
        int n= nums.size();
        int ans=40;
        for(int i=0;i<n;i++){
            int cur= nums[i];
            int curSum=0;
            while(cur>0){
                curSum+= cur%10;
                cur/=10;
            }
            ans= min(ans, curSum);
        }
        return ans;
    }
};

// 2 min