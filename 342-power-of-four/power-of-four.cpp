//POTD Oct'23, 2023
//Pct'23, 2023 04:28 pm

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)return true;
        if(n<1 || n%4)return false;
        double k=log(n)/ log(4);
        int t=k;
        return k==(double)t;
    }
};

//15 min