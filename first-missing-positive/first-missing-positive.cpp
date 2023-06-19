class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=1,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==k)k++;
        }
        return k;
    }
};