//Oct'24, 2023 06:15 pm
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size(), m=mat[0].size();
        if(mat[0][0]>target || mat[n-1][m-1]<target){
            return false;
        }
        for(int i=0;i<n;i++){
            int l=0, r=m-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(mat[i][mid]==target){
                    return true;
                }
                else if(mat[i][mid]<target){
                    l=mid+1;
                }
                else {
                    r=mid-1;
                }
            }
        }
        return false;
    }
};