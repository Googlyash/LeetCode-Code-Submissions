// POTD Oct'26, 2026
// Oct'26, 2026 10:14 pm

class Solution {
    private long totSum(int i, int j, int div, int[][]grid, boolean[][]seen, long[][]dp){
        int n= grid.length, m= grid[0].length;

        if(Math.min(i,j)<0 || i>=n || j>=m || grid[i][j]==0 || seen[i][j]==true){
            return 0;
        }
        seen[i][j]=true;

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int dir[]= {0, 1, 0, -1, 0};
        int ans= grid[i][j];
        for(int k=0;k<4;k++){
            int r= i+dir[k], c= j+dir[k+1];

            ans+= totSum(r, c, div, grid, seen, dp);
        }
        return dp[i][j]= ans%div;
    }
    public int countIslands(int[][] grid, int k) {
        int n= grid.length, m= grid[0].length;

        int ans=0;
        boolean[][] seen= new boolean[n][m];
        long[][] dp= new long[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j]=-1;
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0 && seen[i][j]==false){
                    long sum= totSum(i, j, k, grid, seen, dp);
                    System.out.println(sum);
                    ans+= sum%k == 0 ? 1 : 0;
                }
            }
        }
        return ans;
    }
}

// 23 min
// 17th Java submission