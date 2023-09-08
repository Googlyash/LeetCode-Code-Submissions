//POTD Sep'8, 2023
//Sep'8, 2023 08:54 am

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        v.push_back({1});

        for(int i=1;i<n;i++){
            vector<int>vv;
            vv.push_back(1);
            for(int j=1;j<i;j++){
                vv.push_back(v[i-1][j]+v[i-1][j-1]);
            }
            vv.push_back(1);
            v.push_back(vv);
        }
        return v;
    }
};