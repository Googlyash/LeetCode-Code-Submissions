// Jan'16, 2025 04:29 pm

class Solution {
    void solve(int i, string s, map<int, string>&mp, string digits, vector<string>&ans){
        int n=digits.size();
        if(i==n){
            if(!s.empty())ans.push_back(s);
            return;
        }

        for(int j=0;j<mp[digits[i]-'0'].size(); j++){
            s+= mp[digits[i]-'0'][j];
            solve(i+1, s, mp, digits, ans);
            s.pop_back();
        }
        
        return ;
    }
public:
    vector<string> letterCombinations(string digits) {
        int n= digits.size();

        map<int, string>mp;
        mp[2]="abc", mp[3]= "def", mp[4]= "ghi", mp[5]= "jkl", mp[6]= "mno";
        mp[7]="pqrs", mp[8]= "tuv", mp[9]= "wxyz";

        vector<string>ans;
        solve(0, "", mp, digits, ans);
        return ans;
    }
};

// 11 min