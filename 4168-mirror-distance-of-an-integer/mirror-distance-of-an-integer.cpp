// POTD Apr'18, 2026
// Apr'19, 2026 02:03 am 

class Solution {
public:
    int mirrorDistance(int n) {
        int ans=0;
        string s= to_string(n);
        reverse(s.begin(), s.end());
        return abs(n - stoi(s));

    }
};

// 2 min