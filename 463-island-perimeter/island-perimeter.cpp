//POTD Apr'18, 2024
//Apr'18, 2024 08:35 pm

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();

        int del[]= {0, -1, 0, 1, 0};
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    for(int k=0;k<4;k++){
                        int r= i+ del[k];
                        int c= j+ del[k+1];
                        if(min(r,c)>=0 && r<n && c<m && grid[r][c]!=1){
                            ans++;
                        }
                        else if(min(r,c)<0 || r>=n || c>=m){
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};

//10 min