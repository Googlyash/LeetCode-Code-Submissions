// POTD Nov'13, 2025
// Nov'13, 2025 11:57 pm

class Solution {
public:
    int maxOperations(string s) {
        int n= s.size();

        int cnt=0, ans=0;
        for(int i=n; i>=0; i--){
            if(s[i]=='1' && s[i+1]=='0'){
                cnt++;
            }
            if(s[i]=='1'){
                ans+= cnt;
            }
        }
        return ans;
    }
};

// 13 min