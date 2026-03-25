// POTD Mar'25, 2026
// Mar'26, 2026 02:34 am

class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n= grid.size(), m= grid[0].size();

        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum+= grid[i][j];
            }
        }

        long long curSum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                curSum+= grid[i][j];
            }
            if(curSum*2==sum){
                return true;
            }
        }
        curSum=0;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                curSum+= grid[i][j];
            }
            if(curSum*2==sum){
                return true;
            }
        }
        return false;
    }
};

// 4 min