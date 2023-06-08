class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {
        int i=0,j=0,n=v.size(),m=v[0].size(), k=0;
        for(i=n-1;i>=0;i--)
        {
            for(j=m-1;j>=0;j--)
            {
                if(v[i][j]<0)k++;
                else break;
            }
        }
        return k;
    }
};