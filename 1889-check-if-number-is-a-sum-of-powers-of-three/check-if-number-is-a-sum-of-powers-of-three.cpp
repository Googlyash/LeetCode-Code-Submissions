// POTD Mar'4, 2025
// Mar'4, 2025 07:22 pm

class Solution {
    bool solve(int n, int t){
        if(n<1 || t>n){
            return n==0;
        }

        bool notTake= solve(n, t*3);
        bool take= solve(n-t, t*3);

        return take + notTake;
    }
public:
    bool checkPowersOfThree(int n) {
        return solve(n, 1);
    }
};

// 4 min