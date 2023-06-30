//Striver: Recursion
//June'30, 2023
//Trickyyyy

class Solution {
private:
    void solve(int col, vector<string>&board, vector<vector<string> > &v, vector<int>&leftrow, vector<int>&upperdiagonal, vector<int>lowerdiagonal, int n){

        if(col==n){
            v.push_back(board);
            return;
        }
        
        for(int row=0; row<n; row++){
            if(leftrow[row]==0 && upperdiagonal[n-1+ col- row]==0 && lowerdiagonal[col+ row]==0){
                leftrow[row]=1;
                lowerdiagonal[row+col]=1;
                upperdiagonal[ n-1+ col- row]=1;
                board[row][col]='Q';
                solve(col+1, board, v, leftrow, upperdiagonal, lowerdiagonal, n);
                leftrow[row]=0;
                lowerdiagonal[row+col]=0;
                upperdiagonal[ n-1+ col- row]=0;
                board[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> v;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int> leftrow(n,0), upperdiagonal(2*n-1,0), lowerdiagonal(2*n-1,0);
        solve( 0,board,v, leftrow, upperdiagonal, lowerdiagonal, n);
        return v;
    }
};