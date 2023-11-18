//POTD Nov'18, 2023
//Nov'18, 2023 04:51 pm

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long n= nums.size(), ans=0, sum=0;
        sort(nums.begin(), nums.end());
        long long i=0, j=0;
        while(j<n){
            sum+=nums[j];
            
            while(1LL*nums[j]*(j-i+1)-sum> k){
                sum-=nums[i++];
            }
            ans=max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};
