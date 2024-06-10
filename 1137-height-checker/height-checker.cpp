//POTD June'10, 2024
//June'10, 2024 11:22 pm

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>sh=heights;
        sort(sh.begin(), sh.end());
        int ans=0;

        for(int i=0;i<heights.size(); i++){
            if(heights[i]!=sh[i]){
                ans++;
            }
        }
        return ans;
    }
};
