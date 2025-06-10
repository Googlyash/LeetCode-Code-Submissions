// POTD Jun'10, 2025
// Jun'10, 2025 06:52 pm

class Solution {
public:
    int maxDifference(string s) {
        int n= s.size();

        map<char, int>mp;
        for(auto c:s){
            mp[c]++;
        }
        int odd=0, even=n;
        for(auto it:mp){
            int cnt= it.second;
            if(cnt%2){
                odd= max(odd, cnt);
            }
            else {
                even= min(even, cnt);
            }
        }

        return odd-even;
    }
};

// 4 min