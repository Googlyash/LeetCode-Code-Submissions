// POTD Jan'11, 2026
// Jan'12, 2026 02"42 am

class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n= matrix.size(), m=matrix[0].size();

        vector<vector<int>> mat;
        for(auto v: matrix){
            vector<int>cur;
            for(auto c: v){
                cur.push_back(c-'0');
            }
            mat.push_back(cur);
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                if(mat[i][j]==1){
                    mat[i][j]+= mat[i][j-1];
                }
            }
        }
        int ans= 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]>0){
                    int curWid= mat[i][j];
                    for(int k= i; k<n; k++){
                        if(mat[k][j]==0){
                            break;
                        }
                        curWid= min(curWid, mat[k][j]);
                        ans= max(ans, curWid * (k-i+1));
                    }
                }
            }
        }
        return ans;
    }
};

// 27 min