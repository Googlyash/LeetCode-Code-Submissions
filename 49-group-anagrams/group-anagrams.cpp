//POTD Feb'6, 2023
//Feb'7, 2023 02:43 am

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>ans;
        map<string, vector<string>>mp;
        for(auto it:strs){
            string s=it;
            sort(s.begin(), s.end());
            mp[s].push_back(it);
        }
        for(auto it:mp){
            vector<string>v;
            for(auto s:it.second){
                v.push_back(s);
            }
            ans.push_back(v);
        }
        return ans;
    }
};

//3 min