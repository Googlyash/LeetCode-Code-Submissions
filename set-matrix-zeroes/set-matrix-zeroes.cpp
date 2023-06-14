class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        vector<pair<int,int>>a;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0){
                    a.push_back({i,j});
                }
            }
        }
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<m;j++)v[a[i].first][j]=0;
            for(int j=0;j<n;j++)v[j][a[i].second]=0;
        }
    }
};