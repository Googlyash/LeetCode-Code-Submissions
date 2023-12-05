//POTD Dec'5, 2023
//Dec'5, 2023 11:41 pm

class Solution {
public:
    int numberOfMatches(int n) {
        int ans=0;
        while(n>1){
            ans+=n/2;
            n=(n+1)/2;
        }
        return ans;
    }
};

//2 min