//Nov'16, 2023 05:09 pm

class Solution {

    bool dfs(int i, int j, vector<vector<char>>&board, int l, string &w, vector<vector<int>>&pathvis){
        int n=board.size(), m=board[0].size();
        if(min(i,j)<0|| i>=n || j>=m){
            return false;
        }
        if(w[l]==board[i][j]){
            if(l==w.size()-1)return true;
        }
        else {
            return false;
        }
        int d[5]={0, -1, 0, 1, 0};
        pathvis[i][j]=1;
        for(int r=0;r<4;r++){
            int k=i+d[r];
            int c=j+d[r+1];
            if(min(k,c)>=0 && k<n && c<m && !pathvis[k][c] && l<w.size()-1 && w[l+1]==board[k][c]){
                if(dfs(k, c, board, l+1, w, pathvis)){
                    cout<<board[i][j]<<endl;
                    return true;
                }
            }
        }
        pathvis[i][j]=0;
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(), m=board[0].size();
        vector<vector<int>>pathvis(n+1, vector<int>(m+1, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] && dfs(i, j, board, 0, word, pathvis)){
                    cout<<1;return true;
                }
                
            }
        }
        return false;
    }
};