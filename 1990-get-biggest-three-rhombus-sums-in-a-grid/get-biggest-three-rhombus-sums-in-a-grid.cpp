// POTD Mar'16, 2026
// Mar'17, 2026 12:56 am

class Solution {
    int getSum(int i, int j, int size, vector<vector<int>>&grid){
        int n= grid.size(), m= grid[0].size();

        if(i> n-1-size || i< size || j> (m-1-size*2)){
            return 0;
        }

        int ans=0;
        // Go right up
        for(int k=0;k<size; k++){
            ans+= grid[i][j];
            i--, j++;
        }
        // Go right down
        for(int k=0;k<size; k++){
            ans+= grid[i][j];
            i++, j++;
        }
        // Go left down
        for(int k=0;k<size; k++){
            ans+= grid[i][j];
            i++, j--;
        }
        // Go left up
        for(int k=0;k<size; k++){
            ans+= grid[i][j];
            i--, j--;
        }
        return ans;
    }
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int n= grid.size(), m=grid[0].size();

        vector<int>ans;
        set<int>st; 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                st.insert(grid[i][j]);
                for(int size=1; size< max(n, m)/2+1; size++){
                    int curSum= getSum(i, j, size, grid);
                    if(curSum!=0)st.insert(curSum);
                }
            }
        }
        if(st.empty())return ans;
        for(int i=0;i<3;i++){
            int curMax= *st.rbegin();
            // auto it= st.end();
            // it--;
            st.erase(curMax);
            ans.push_back(curMax);
            if(st.empty())return ans;
        }
        return ans;
    }
};

// 30 min