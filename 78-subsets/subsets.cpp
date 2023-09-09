//Sep'9, 2023 08:55 pm
//BackTracking Practice

class Solution {
private:
    void solve(int i, vector<int>&v, vector<vector<int>>&ans, vector<int>&nums){
        if(i<0){
            ans.push_back(v);
            return ;
        }

        //notTake
        solve(i-1, v, ans, nums);

        //Take
        v.push_back(nums[i]);
        solve(i-1, v, ans, nums);
        v.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(nums.size()-1, v, ans, nums);
        return ans;
    }
};