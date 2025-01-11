// POTD Jan'11, 2025
// Jan'11, 2025  05:28 pm


class Solution {
public:
    bool canConstruct(string s, int k) {
        int n= s.size();
        if(n==k){
            return true;
        }
        if(n<k){
            return false;
        }
        map<int, int>mp;
        for(auto it:s){
            mp[it]++;
        }
        int cnt=0;
        for(auto it:mp){
            cnt+= it.second%2;
        }
        return cnt<=k;
    }
};

// 5 min