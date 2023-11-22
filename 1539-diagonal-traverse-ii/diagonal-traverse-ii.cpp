//POTD Nov'22, 2023
//Nov'22, 2023 03:32 pm

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n=nums.size(), k=0;
        for(int i=0;i<n;i++){
            for(auto it: nums[i]){
                k++;
            }
        }
        vector<vector<int>>temp(k+1);
        for(int i=0;i<n;i++){
            for(int j=0;j<nums[i].size();j++){
                temp[i+j].push_back(nums[i][j]);
            }
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            for(int j=temp[i].size()-1;j>=0;j--){
                int it= temp[i][j];
                ans.push_back(it);
        }
        }
        return ans;
    }
};