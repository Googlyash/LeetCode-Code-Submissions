//POTD Feb'15, 2024
//Feb'15,2024 07:24 pm

#define ll long long
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        ll ans=0;
        for(auto it:nums){
            ans+=it;
        }
        for(int i=n-1;i>1;i--){
            if(ans-nums[i]> nums[i]){
                return ans;
            }
            ans-=nums[i];
        }
        return -1;
    }
};

//40 min
//Got confused with dp, i.e. not compulsion of taking every element