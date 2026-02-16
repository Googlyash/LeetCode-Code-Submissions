// POTD Feb'16, 2026
// Feb'16, 2026 11:17 pm

class Solution {
public:
    int reverseBits(int n) {
        string s;
        while(n){
            s+= n%2 + '0';
            n/=2;
        }
        for(int i=s.size(); i<32; i++){
            s+= '0';
        }
        int ans=0;
        for(int i=0;i<32; i++){
            ans*=2;
            ans+= s[i]-'0';
        }

        return ans;
    }
};

// 3 min