//Sep'11, 2023 04:22 pm

class Solution {
private:
    bool check(int l, int r, string s){
        while(l< r){
            if(s[l++]!=s[r--]){
                return false;
            }
        }
        return true;
    }
private:
    void solve(int idx, string s, vector<string>&v, vector<vector<string>>&ans){
        if(idx==s.size()){
            ans.push_back(v);
            return ;
        }

        for(int i=idx; i<s.size();i++){
            if(check(idx, i, s)){
                v.push_back(s.substr(idx, i-idx+1));
                solve(i+1, s, v, ans);
                v.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        solve(0, s, v, ans);
        return ans;
    }
};