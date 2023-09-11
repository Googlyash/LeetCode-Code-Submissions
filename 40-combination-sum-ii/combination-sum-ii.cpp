//Sep'1, 2023 3:55pm
//BackTracking Practice
//Almost Self-solved
//Comments

class Solution {
private:
    void solve(int idx, int remainingSum, vector<int>&v, vector<vector<int>>&ans, vector<int>&candidates){
        if(remainingSum==0){
            ans.push_back(v);
            return ;
        }
        int x= idx;

        while(x< candidates.size() && remainingSum>= candidates[idx]){
            if(x> idx &&  candidates[x]== candidates[x-1]){
                x++;
                continue;
            }

            v.push_back(candidates[x]);
            solve(x+1, remainingSum-candidates[x], v, ans, candidates);
            v.pop_back();
            x++;
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>v;
        solve(0, target, v, ans, candidates);
        return ans;
    }
};