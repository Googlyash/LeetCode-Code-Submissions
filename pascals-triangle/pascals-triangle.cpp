class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        int i=0,k,j=0;
        v.push_back({1});
        for(i=1;i<n;i++){
            vector<int>vv;
            vv.push_back(1);
            for(j=1;j<i;j++){
                vv.push_back(v[i-1][j]+v[i-1][j-1]);
            }
            vv.push_back(1);
            v.push_back(vv);
        }
        return v;
    }
};