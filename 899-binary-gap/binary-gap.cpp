// POTD Feb'22, 2026
// Feb'22, 2026 10:18 am

class Solution {
public:
    int binaryGap(int n) {
        int l=32, r=0, ans=0, cur=0;
        while(n){
            if(n%2==1){
                r=cur;
                ans= max(r-l, ans);
                l= cur;
            }
            cur++;
            n/=2;
        }

        return ans;
    }
};

// 5 min