// POTD Feb'10, 2026
// Feb'11, 2026 01:33 am

class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n= nums.size();

        int ans=0;
        for(int i=0;i<n;i++){
            set<int>even, odd;
            for(int j=i; j<n; j++){
                if(nums[j]%2){
                    odd.insert(nums[j]);
                }
                else {
                    even.insert(nums[j]);
                }
                if(odd.size() == even.size()){
                    ans= max(ans, j-i+1);
                }
            }
        }

        return ans;
    }
};

// 4 min