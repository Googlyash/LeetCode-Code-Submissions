//POTD Dec'6, 2023
//Dec'6, 2023 06:08 pm

class Solution {
public:
    int totalMoney(int n) {
        int ans=0, k=n%7, l=n/7;
        
        ans=28*l;
        ans+=(((l-1)*l)/2)*7;

        ans+=(k*(k+1))/2+l*k;
        return ans;
    }
};

//25 min