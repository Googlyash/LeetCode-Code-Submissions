// POTD Oct'25, 2026
// Oct'25, 2026 11:20 pm

class Solution {
    boolean solve(int i, int j, int[][]grid, boolean[][]seen){
        int n= grid.length, m= grid[0].length;
        if(Math.min(i,j)<0 || i>=n || j>=m){
            return false;
        }
        if(grid[i][j]==1){
            return true;
        }
        grid[i][j]= 1;
        seen[i][j]=true;
        int dir[]= {-1, 0, 1, 0, -1};
        boolean cur= true;
        for(int k=0;k<4;k++){
            int r= i+dir[k], c=j+dir[k+1];
            cur &= solve(r, c, grid, seen);
        }
        return cur;
    }
    public int closedIsland(int[][] grid) {
        int n= grid.length, m= grid[0].length;

        int ans=0;
        boolean[][]seen= new boolean[n][m];
        int[][]tempGrid= grid;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0 && seen[i][j]==false){
                    ans+= solve(i, j, tempGrid, seen) ? 1 : 0;
                }
            }
        }
        return ans;
    }
}

// 28 min