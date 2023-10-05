//POTD Oct'5, 2023
//Oct'5, 2023 10:59 am

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int mx=1, n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                if(mx>n/3)ans.push_back(nums[i-1]);
                mx=0;
            }
            mx++;
        }
        if(mx>n/3)ans.push_back(nums[n-1]);
        return ans;
    }
};