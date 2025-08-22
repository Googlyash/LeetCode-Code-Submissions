// POTD Aug'22, 2025
// Aug'22, 2025 06:48 pm

class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n= grid.size(), m= grid[0].size();

        int lc=n-1, rc=0, rr=0, lr=m-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    lc= min(lc, i);
                    rc= max(rc, i);
                    lr= min(lr, j);
                    rr= max(rr, j);
                }
            }
        }

        cout<<rc<<" "<<lc<<" "<<rr<<" "<<lr;
        int ans= (rc-lc+1)*(rr-lr+1);
        return max(0, ans);
    }
};

// 6 min