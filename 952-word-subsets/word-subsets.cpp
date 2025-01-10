// POTD Jan'10, 2025
// Jan'10, 2025 07:34 am

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int n= words1.size();
        map<char, int>mp;
        vector<string> ans;

        for(auto it:words2){
            vector<int>cur(27, 0);
            for(auto c:it){
                cur[c-'a']++;
            }
            for(int i=0;i<26;i++){
                mp[(i+'a')]= max(mp[(i+'a')], cur[i]);
            }
        }

        for(auto it:words1){
            vector<int>cur(27, 0);
            int i=0;
            for(auto c:it){
                cur[c-'a']++;
            }
            for(i=0;i<26;i++){
                if(mp[i+'a']> cur[i]){
                    break;
                }
            }
            if(i==26){
                ans.push_back(it);
            }
        }

        return ans;
    }
};

// 10 min