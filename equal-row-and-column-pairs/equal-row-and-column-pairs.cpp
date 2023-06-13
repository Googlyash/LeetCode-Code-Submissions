class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int i,j,n=grid.size(),cnt=0,k=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(grid[i][0]==grid[0][j]){
                    for(k=1;k<n;k++){
                        if(grid[i][k]!=grid[k][j])break;
                    }
                    if(k==n)cnt++;
                    k=0;
                }
            }
        }
        return cnt;
    }
};