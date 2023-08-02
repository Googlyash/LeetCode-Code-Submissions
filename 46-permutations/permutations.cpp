//Striver: Recursion
//3rd technique
//Self-solved

class Solution {
private:
    void allPermut(int idx, vector<int>&nums, vector<vector<int>> &v){
        if(idx==nums.size()){
            v.push_back(nums);
            return;
        }

        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            allPermut(idx+1,nums, v);
            swap(nums[i],nums[idx]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        allPermut(0,nums,v);
        return v;
    }
};