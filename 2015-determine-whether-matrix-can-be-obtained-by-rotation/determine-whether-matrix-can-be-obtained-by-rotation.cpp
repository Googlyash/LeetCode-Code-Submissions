// POTD Mar'22, 2026
// Mar'22, 2026 06:15 pm

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target){
            return true;
        }
        int n= mat.size(), m= mat[0].size();
        vector<vector<int>>pre= mat;
        
        int rotation=0;
        while(rotation<3){
            vector<vector<int>>conv= mat;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    conv[i][j]= pre[j][m-1-i];
                }
            }

            int cnt= 0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cnt+= conv[i][j]== target[i][j];
                    pre[i][j]= conv[i][j];
                }
            }
            if(cnt==n*m){
                return true;
            }

            rotation++;
        }
        return false;
    }
};

// 8 min