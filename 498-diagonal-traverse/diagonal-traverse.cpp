// POTD Aug'25, 2025
// Aug'25, 2025 10:30 pm

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n= mat.size();
        int m= mat[0].size();

        vector<int>ans;
        for(int k=0;k<n+m-1; k++){
            if(k%2==1){
                for(int i= max(0, k-m+1);i<=min(k, n-1);i++){
                    int j= k-i;
                    ans.push_back(mat[i][j]);
                }
            }
            else {
                for(int i=min(k, n-1);i>= max(0, k-m+1); i--){
                    int j= k-i;
                    ans.push_back(mat[i][j]);
                }
            }
        }
        return ans;
    }
};

// 21 min