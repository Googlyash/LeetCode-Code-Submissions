//POTD Sep'24, 2023
//Sep'24, 2023 03:40 pm
//Comments: 42 min

class Solution {
private:
    double solve(int poured, int row, int glass, vector<vector<double>>&dp){
        if(row<0 || glass>row || glass<0){
            return 0.00;
        }
        if(row==0 && glass==0){
            return poured;
        }

        if(dp[row][glass]>-1){
            return dp[row][glass];
        }
        double left= (solve(poured, row-1, glass-1, dp)-1)/2;
        if(left<0 ){
            left=0;
        }

        double right= (solve(poured, row-1, glass, dp)-1)/2;
        if(right<0){
            right=0;
        }
        double tot=left+ right;
        return dp[row][glass]=tot;


    }
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>>dp(query_row+1, vector<double>(query_glass+1, -1));
        return min(1.00, solve(poured, query_row, query_glass, dp));
    }
};