//POTD Oct'10, 2023
//OCt;10, 2023 03:37

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(), j=0;
        int ans=0;
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        for(int i=0;i<nums.size();i++){
            while(nums[j]+n<=nums[i])j++;
            int k=i-j+1;
            ans=max(ans, k);
        }
        return n-ans;
    }
};

//25 min