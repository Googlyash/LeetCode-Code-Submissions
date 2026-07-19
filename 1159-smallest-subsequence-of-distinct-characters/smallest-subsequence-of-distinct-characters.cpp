// POTD Jul'19, 2026
// Jul'20, 2026 12:07 am

class Solution {
public:
    string smallestSubsequence(string s) {
        int n= s.size();
        vector<int>freq(27, 0);
        map<int, int>mp;
        string ans;

        for(auto c: s){
            freq[c-'a']++;
        }

        for(auto c: s){
            int cur= c-'a';
            freq[cur]--;

            if(mp[cur]> 0){
                continue;
            }

            while(ans.size() && ans.back() > c && freq[ans.back()-'a']){
                mp[ans.back()-'a']=0;
                ans.pop_back();
            }

            mp[c-'a']++;
            ans.push_back(c);
        }
        return ans;
    }
};

// Comments