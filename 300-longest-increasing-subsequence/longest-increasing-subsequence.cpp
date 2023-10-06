//Oct'6, 2023 03:58 pm

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            auto it=lower_bound(v.begin(), v.end(), nums[i])-v.begin();
            if(it==v.size()){
                v.push_back(nums[i]);
            }
            else v[it]=nums[i];
        }
        return v.size();
    }
};