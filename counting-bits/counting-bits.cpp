class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            int ans=0;
            int j=i;
            while(i){
                ans+=i%2;
                i/=2;
            }
            i=j;
            v.push_back(ans);
        }
        return v;
    }
};