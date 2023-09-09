//Sep'9,2023 09:53 pm

class Solution {
private:
    void solve(vector<int>&temp, vector<int>&vis, vector<vector<int>>&ans, vector<int>&nums){
        if(temp.size() ==nums.size()){
            ans.push_back(temp);
            return ;
        }

        for(int i=0; i<nums.size(); i++){
            if(vis[i] || i>0 && nums[i]==nums[i-1] && !vis[i-1])continue;
            vis[i]=1;
            temp.push_back(nums[i]);
            solve(temp, vis, ans, nums);
            temp.pop_back();
            vis[i]=0;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        vector<int>vis(nums.size(), 0);
        vector<int>temp;
        solve(temp, vis, ans, nums);
        return ans;
    }
};

//Comments