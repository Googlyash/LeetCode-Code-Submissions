class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int n=m.size(),k=m[0].size(),l=0;
        int n1=0,m1=0;
        long p=n*k;
        vector<int>v(p,0);
        while(l<p)
        {
            for(int i=m1;i<k-m1;i++)
            {
                v[l++]=m[n1][i];
            }
            n1++;
            if(l>=p)break;
            for(int i=n1;i<n-n1+1;i++){
                v[l++]= m[i][k-m1-1];
            }
            m1++;
            if(l>=p)break;
            for(int i=k-m1-1;i>=m1-1;i--)
            {
                v[l++]=m[n-n1][i];
            }
            if(l>=p)break;
            for(int i=n-1-n1;i>=n1;i--){
                v[l++]=m[i][m1-1];
            }
        }
        return v;
    }
};