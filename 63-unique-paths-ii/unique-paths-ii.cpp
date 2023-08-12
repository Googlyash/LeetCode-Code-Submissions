//POTD Aug'12, 2023 06:14 pm
//Spae Optimised

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size(), m=obstacleGrid[0].size();
        
        vector<int>pre(m+1, 0), cur(m+1, 0);
        if(obstacleGrid[0][0]==0)pre[0]=1;
        for(int j=1;j<m;j++){
            pre[j]=pre[j-1];
            if(obstacleGrid[0][j]==1)pre[j]=0;
        }

        for(int i=1;i<n;i++){
            cur[0]=pre[0];
            if(obstacleGrid[i][0]==1)cur[0]=0;
            for(int j=1;j<m;j++){
                cur[j]=pre[j]+cur[j-1];
                if(obstacleGrid[i][j]==1)cur[j]=0;
            }
            pre=cur;
        }
        return pre[m-1];
    }
};