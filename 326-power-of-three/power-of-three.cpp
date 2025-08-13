// POTD Aug'13, 2025
// Aug'13, 2025 07:02 pm

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        int ans=0;

        while(n){
            ans+= n%3;
            n/=3;
        }
        return ans==1;
    }
};

// 2 min