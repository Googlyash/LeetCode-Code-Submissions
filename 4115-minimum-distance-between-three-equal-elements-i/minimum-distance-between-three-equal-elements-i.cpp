// POTD Apr'10, 2026
// Apr'11, 2026 12:54 am

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n= nums.size();

        int ans=1e8;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]==nums[j] && nums[j]==nums[k]){
                        ans= min(ans, 2*k-2*i);
                    }
                }
            }
        }
        return ans<1e8 ? ans : -1;
    }
};

// 4 min