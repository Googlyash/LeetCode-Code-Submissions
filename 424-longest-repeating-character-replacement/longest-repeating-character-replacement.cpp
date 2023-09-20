//Sep'17, 2023 05:44 pm

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int, int>mp;
        int l=0, mx=0, ans=0;
        for(int r=0;r<s.size(); r++){
            mp[s[r]-'A']++;
            mx=max(mx, mp[s[r]-'A']);
            if( (r-l+1)- mx> k){
                mp[s[l++]-'A']--;
            }
            ans=max(ans, r-l+1);
        }
        return ans;
    }
};