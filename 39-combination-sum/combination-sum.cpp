//Sep'9, 2023 07:46 pm

class Solution {
private:
    void solve(int idx, int sum, vector<int>&v, vector<vector<int>>&ans, vector<int>&cand){
        if(idx==0){
            int curr=sum;
            if(sum%cand[0]==0){
                while(sum){
                    v.push_back(cand[0]);
                    sum-=cand[0];
                }
                ans.push_back(v);
                for(int i=0;i<curr/cand[0]; i++){
                    v.pop_back();
                }
                return ;
            }
            if(sum==0){
                ans.push_back(v);
            }
            return ;
        }

        //nottake
        solve(idx-1, sum, v, ans, cand);
        //take
        if(cand[idx]<= sum){
            v.push_back(cand[idx]);
            solve(idx, sum-cand[idx],  v, ans, cand);
            v.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>v;
        solve(n-1, target, v, ans, candidates);
        return ans;
    }
};

//18Min.