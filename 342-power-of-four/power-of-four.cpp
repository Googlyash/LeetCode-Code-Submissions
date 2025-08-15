// POTD Aug'15, 2025
// Aug'16, 2025 12:10 am

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        double k= log(n)/log(4);
        return k== double(floor(k));
    }
};

// 2 min