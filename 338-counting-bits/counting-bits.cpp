//POTD Sep'1, 2023
//Sep'1, 2023 09:19 am

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1, 0);
        for(int i=0;i<=n;i++)
        {
            v[i]=v[i>>1]+ (i&1);
        }
        return v;
    }
};