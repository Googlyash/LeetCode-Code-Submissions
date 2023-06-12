class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        int v[n+m],i;
        for(i=0;i<n;i++)
        {
            v[i]=v2[i];
        }
        for(i=0;i<m;i++)
        {
            v[i+n]=v1[i];
        }
        sort(v,v+n+m);
        for(i=0;i<n+m;i++)
        {
            v1[i]=v[i];
        }
    }
};