//POTD Oct'16, 2023
//Oct'16, 2023 03:23 pm

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v;
        v.push_back({1});
        for(int i=1;i<=rowIndex;i++){
            vector<int>k;
            k.push_back(1);
            for(int j=1;j<i;j++){
                k.push_back(v[i-1][j-1]+v[i-1][j]);
            }
            k.push_back(1);
            v.push_back(k);
        }
        return v[rowIndex];
    }
};