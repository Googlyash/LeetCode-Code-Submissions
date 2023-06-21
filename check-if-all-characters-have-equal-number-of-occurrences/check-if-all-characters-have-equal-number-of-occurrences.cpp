class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int k=mp[s[0]];
        for(auto it:mp){
            if(k!= it.second)return 0;
        }
        return 1;
    }
};