//Striver: Recursion
//June'30,2023 07:00pm 
//TC:  O( (2^n) *k*(n/2) )   SC:  O(k * x)

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> v;
        vector<string>res;
        solve(0, res,v, s);
        return v;
    }

    void solve(int idx, vector<string>& res, vector<vector<string>>& v, string s){
        if(idx== s.size()){
            v.push_back(res);
            return;
        }

        for(int i=idx; i<s.size();i++){
            if(isPalin(s, idx, i)){
                res.push_back(s.substr(idx,i-idx+1));
                solve(i+1, res, v, s);
                res.pop_back();
            }
        }
    }

    bool isPalin(string s, int strt, int end){
        while(strt<end){
            if(s[strt++]!= s[end--]){
                return false;
            }
        }
        return true;
    }
};