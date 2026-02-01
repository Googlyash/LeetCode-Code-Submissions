// POTD Feb'1, 2026
// Feb'1, 2026 11:09 am

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n= nums.size();

        int ans= nums[0];
        int mx=INT_MAX, mx2= INT_MAX;
        for(int i=1;i<n;i++){
            if(nums[i]<=mx){
                mx2= min(mx, mx2);
                mx= min(mx, nums[i]);
            }
            else if(nums[i]<mx2){
                mx2= nums[i];
            }
        }
        return ans+ mx2+ mx;
    }
};

// 3 min