//POTD Nov'7, 2023
//Nov'7, 2023 04:46 pm

#define ll long long
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size(), z=1e6, o=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                z=min(abs(matrix[i][j]), z);
                o+= (matrix[i][j]<0);
            }
        }
        ll cur=0; 
        for(int i=0;i<n;i++){
            for(auto it:matrix[i]){
                cur+= abs(it);
            }
        }
        if(o%2)cur-= 2*z;
        return cur;
    }
};

//18 min