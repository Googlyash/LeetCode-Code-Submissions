// POTD Sep'26, 2026
// Sep'27, 2026 12:15 am

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        vector<string>v;
        int n= s.size();

        string s1, ans;
        int strt=0;
        unordered_map<string, string>mp;
        for(auto it: knowledge){
            mp[it[0]]= it[1];
        }
        for(auto c: s){
            if(c=='('){
                s1= "";
                strt= 1;
                continue;
            }
            if(c==')'){
                if(mp.count(s1)){
                    ans+= mp[s1];
                }
                else {
                    ans+='?';
                }
                s1="";
                strt=0;
                continue;
            }
            if(strt){
                s1+= c;
            }
            else {
                ans+=c;
            }
        }
        return ans;
    }
};

// 7 min