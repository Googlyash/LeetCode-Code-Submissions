// POTD Oct'6, 2025
// Oct'7, 2025 12:38 pm

class Solution {
    bool solve(int i, int j, int mid, vector<vector<int>>&grid, vector<vector<int>>&pathVis){
        
        int dir[]= {0, -1, 0, 1, 0};
        int n= grid.size();
        if(i== n-1 && i == j){
            return true;
        }
        pathVis[i][j]=1;
        for(int k=0;k<4;k++){
            int r= i + dir[k];
            int c= j + dir[k+1];
            if(min(r,c)>=0 && max(r, c)< n && pathVis[r][c]==0){
                if(grid[r][c]<= mid){
                    if(solve(r, c, mid, grid, pathVis)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool possible(int mid, vector<vector<int>>&grid){
        int n= grid.size();
        if(grid[0][0]>mid){
            return false;
        }
        vector<vector<int>>pathVis(n, vector<int>(n, 0));
        return solve(0, 0, mid, grid, pathVis);
    }
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n= grid.size();

        int l= grid[0][0], r=0;
        for(auto it:grid){
            for(auto val:it){
                r= max(r, val);
            }
        }

        while(l < r){
            int mid= l+ (r-l)/2;
            if(possible(mid, grid)){
                r= mid;
            }
            else {
                l= mid+1;
            }
        }
        return l;
    }
};

// Comments
// 39 min