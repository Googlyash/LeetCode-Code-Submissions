// POTD Jan'23, 2025
// Jan'23, 2025 01:57 pm

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n= grid.size(), m= grid[0].size();

        map<int, int>mpc, mpr;
        set<pair<int,int>>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mpc[i]+= grid[i][j];
                mpr[j]+=grid[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((mpc[i]>1 || mpr[j]>1) && grid[i][j]==1){
                    st.insert({i,j});
                }
            }
        }

        return st.size();
    }
};

// 5 min