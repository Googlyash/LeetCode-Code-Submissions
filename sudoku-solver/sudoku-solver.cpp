//Striver: Recursion
//June'20, 2023 05:46pm

class Solution {
private:
    bool isValid(int row, int col, char c, vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            if(board[row][i]==c){
                return false;
            }

            if(board[i][col]==c){
                return false;
            }

            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c){                 //watch carefully for col and row; and also i%3 and i/3
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){                     //j++
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isValid(i,j,c, board)){
                            board[i][j]=c;
                            if(solve(board)){
                                return true;
                            }
                            else board[i][j]='.';                   //Tricky place
                        }
                    }
                    return false;                                   //remember the place
                }
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};