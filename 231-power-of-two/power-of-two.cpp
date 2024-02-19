//POTD Feb'19, 2024
//Feb'19, 2024 06:53 pm

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt=0;
        while(n){
            cnt+=n%2;
            n/=2;
        }
        return (cnt==1);
    }
};

//1 min