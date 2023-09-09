//Sep'9, 2023 09:02 pm
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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        vector<int>v;
        solve(nums.size()-1, v, ans,nums);
        sort(ans.begin(), ans.end());
        set<vector<int>>st(ans.begin(), ans.end());
        vector<vector<int>>distinctNums(st.begin(), st.end());
        return distinctNums;
    }
};