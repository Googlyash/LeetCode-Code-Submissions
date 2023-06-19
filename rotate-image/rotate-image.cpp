//Striver
//Comments
//Not self solved (Tried but gor trapped into the negative numbers conditons)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        reverse(matrix.begin(),matrix.end());
        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               swap(matrix[i][j], matrix[j][i]);
           }
        }
    }
};