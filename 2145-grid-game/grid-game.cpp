// POTD Jan'21, 2025
// Jan'22, 2025 12:05 am

class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long top=0;
        for(auto it:grid[0])top+=it;
        long long bottom=0, res= LLONG_MAX;

        for(int i=0;i<grid[0].size(); i++){
            top-= grid[0][i];
            res= min(res, max(top, bottom));
            bottom+= grid[1][i];
        }

        return res;
    }
};

// 34 min
// Comments