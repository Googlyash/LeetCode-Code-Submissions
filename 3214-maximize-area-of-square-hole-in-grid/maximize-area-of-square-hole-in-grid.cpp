// POTD Jan'15, 2025
// Jan'16, 2025 01:06 am

class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int mxCol=1, mxRow=1, curCol=1, curRow=1;

        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());
        for(int i=1;i<hBars.size(); i++){
            if(hBars[i]-hBars[i-1]==1){
                curRow++;
            }
            else {
                curRow=1;
            }
            mxRow= max(curRow, mxRow);
        }
        for(int i=1;i<vBars.size(); i++){
            if(vBars[i]-vBars[i-1]==1){
                curCol++;
            }
            else {
                curCol=1;
            }
            mxCol= max(curCol, mxCol);
        }
        int finl= min(mxCol, mxRow)+1;
        return (finl*finl);
    }
};

// 16 min