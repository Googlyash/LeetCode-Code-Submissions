// POTD Jul'30, 2026
// Jul'30, 2026 09:52 pm

class Solution {
public:
    int minimumPushes(string word) {
        int n= word.size();
        
        int tot= n/8;
        tot= (tot*(tot+1))*4;
        int ans= tot + (n/8 + 1)*(n%8);
        return ans;
    }
};

// 6 min