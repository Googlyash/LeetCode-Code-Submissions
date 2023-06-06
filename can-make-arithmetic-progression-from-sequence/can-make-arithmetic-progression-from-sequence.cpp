class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        sort(a.begin(),a.end());
        long long k=a[1]-a[0];
        for(int i=1;i<a.size();i++)
        {
            if(a[i]-a[i-1]!=k)
            {
                return 0;
            }
        }
        return 1;
    }
};