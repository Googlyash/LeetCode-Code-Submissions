// POTD Aug'22, 2026
// Aug'22, 2026 09::48 pm

class Solution {
public:
    bool checkDivisibility(int n) {
        int ans=0, mul=1, cur=n;

        while(cur){
            ans+= (cur%10);
            mul*= (cur%10);
            cur/=10;
        }
        return n%(ans+mul)==0;
    }
};

// 3 min