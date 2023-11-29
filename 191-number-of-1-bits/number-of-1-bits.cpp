//POTD Nov,29, 2023
//Nov'29, 2023 10;18 pm

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n){
            ans+=n%2;
            n/=2;
        }
        return ans;
    }
};