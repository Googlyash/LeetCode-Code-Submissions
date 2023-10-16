//Weekly Contest-367 Oct'15, 2023
//4th question
//Oct'16, 2023 03:42 pm

class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<long long>pre(n*m+1, 1);
        vector<long long>suf(n*m+1, 1);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                pre[i*m+j+1]=(pre[i*m+j]*grid[i][j])%12345;
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                suf[i*m+j]=(suf[i*m+j+1]*grid[i][j])%12345;
            }
        }
        vector<vector<int>>ans(n, vector<int>(m, 1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=(pre[i*m+j]*(suf[i*m+j+1]))%12345;
                ans[i][j]%=12345;
            }
        }

        return ans;
    }
};