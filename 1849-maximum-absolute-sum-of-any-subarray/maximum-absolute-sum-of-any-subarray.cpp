// POTD Feb'26, 2025
// Feb'26, 2025 10:02 pm

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int ans= 0, sum=0, nsum=0;
        int n= nums.size();

        for(int i=0;i<n;i++){
            sum+= nums[i];
            nsum+= nums[i];
            if(sum<0){
                sum=0;
            }
            if(nsum>0){
                nsum=0;
            }
            ans= max(ans, -1*nsum);
            ans= max(ans, sum);
        }

        return ans;
    }
};

// 4 min