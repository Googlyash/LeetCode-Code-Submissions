//POTD Feb'9. 2023
//Feb'9, 2023 04:27 pm

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        int mx=0, idx=0;        
        sort(nums.begin(), nums.end());
        
        vector<int>dp(n, 1);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]%nums[i]==0){
                    dp[j]= max(dp[j], dp[i]+1);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(dp[i]>mx){
                mx=dp[i], idx=i;
            }
        }

        vector<int>ans;
        ans.push_back(nums[idx]);
        for(int i=idx-1;i>=0;i--){
            if(nums[idx]%nums[i]==0 && dp[i]== mx-1){
                mx--;
                ans.push_back(nums[i]);
                idx=i;
            }
        }
        return ans;
    }
};

//50 min