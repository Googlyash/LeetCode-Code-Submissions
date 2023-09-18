//POTD Sep'18, 2023
//Sep'18, 2023 9:55 am

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size(), m=mat[0].size();
        vector<int>sortes;
        vector<pair<int, int>>ans(n, {0, 0});
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1)ans[i].first++;
            }
            ans[i].second=i;
        }
        sort(ans.begin(), ans.end());
        for(int i=0;i<k;i++){
            sortes.push_back(ans[i].second);
        }
        return sortes;

    }
};