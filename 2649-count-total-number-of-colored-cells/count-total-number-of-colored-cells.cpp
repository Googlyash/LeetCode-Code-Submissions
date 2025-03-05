// POTD Mar'5, 2025
// Mar'5, 2025 10:10 pm

class Solution {
public:
    long long coloredCells(int n) {
        long long ans= n;
        ans= ans*ans+ (ans-1)*(ans-1);
        return ans;
    }
};

// 4 min