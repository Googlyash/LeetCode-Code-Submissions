//POTD Sep'25, 2023
//Sep'25, 2023 11:54 pm

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        for(auto c:t){
            if(!mp[c]){
                return c;
            }
            mp[c]--;
        }
        return 'a';
    }
};