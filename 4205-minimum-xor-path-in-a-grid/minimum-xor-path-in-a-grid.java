// POTD Oct'28, 2026
// Oct'29, 2026 04:40 am

class Solution {
    public int minCost(int[][] grid) {
        int n= grid.length, m= grid[0].length;
        int mx= 1<<10;

        Set<Integer>[] dp = new HashSet[m];

        dp[0]= new HashSet<>();
        dp[0].add(grid[0][0]);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0){
                    continue;
                }

                Set<Integer>pre= new HashSet<>();
                if(i>0)pre.addAll(dp[j]);
                if(j>0)pre.addAll(dp[j-1]);

                Set<Integer>cur= new HashSet<>();
                for(int prev: pre){
                    cur.add(prev ^ grid[i][j]);
                }

                dp[j]= cur;
            }
        }

        for(int i=0;i<mx;i++){
            if(dp[m-1].contains(i)){
                return i;
            }
        }
        return -1;
    }
}

// Comments
// 40 min
// 2 wrong submission