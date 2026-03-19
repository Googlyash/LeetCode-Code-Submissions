// POTD Mar'19, 2026
// Mar'19, 2026 11:12 pm

class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n= grid.size(), m=grid[0].size(), ans=0;

        vector<vector<int>>x(n, vector<int>(m, 0)), y(n, vector<int>(m, 0));
        for(int j=0;j<m;j++){
            x[0][j]= grid[0][j]=='X';
            y[0][j]= grid[0][j]=='Y';
            if(j>0){
                x[0][j]+= x[0][j-1];
                y[0][j]+= y[0][j-1];
            }
        }
        for(int i=1;i<n;i++){
            x[i][0]= (grid[i][0]=='X') + x[i-1][0];
            // if(i==1){
            //     cout<<(grid[i][0]=='X' + x[i-1][0])<<endl;
            //     cout<< x[i][0]<<endl;
            // }
            y[i][0]= (grid[i][0]=='Y') + y[i-1][0];
            for(int j=1;j<m;j++){
                x[i][j]= x[i][j-1] + x[i-1][j] + (grid[i][j]=='X') - x[i-1][j-1];
                y[i][j]= y[i][j-1] + y[i-1][j] + (grid[i][j]=='Y') - y[i-1][j-1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // cout<<x[i][j]<<" ";
                if(x[i][j]>0 && x[i][j]==y[i][j]){
                    ans+= 1;
                }
                // if(x[i][j]>0 && x[i][j]==y[i][j]){
                //     cout<<i<< " "<<j<<endl;
                // }
                // if(i==1&&j==0){
                //     cout<<x[i][j]<<" "<<y[i][j]<<endl;
                // }
            }
            // cout<<endl;
        }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<y[i][j]<< " ";
        //     }
        //     cout<<endl;
        // }
        return ans;
    }
};

// 18 min