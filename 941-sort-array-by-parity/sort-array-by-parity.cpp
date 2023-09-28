//POTD Sep'28, 2023 11:21 pm

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int i=0, j=n-1, k=0;
        vector<int>ans(n, 0);
        while(k<n && i<=j){
            if(nums[k]%2==0){
                ans[i++]=nums[k++];
            }
            else ans[j--]=nums[k++];
        }
        return ans;
    }
};