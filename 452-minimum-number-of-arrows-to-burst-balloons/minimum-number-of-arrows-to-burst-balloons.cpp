// Jan'16, 2025 12:13 pm

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n= points.size();

        sort(points.begin(), points.end());
        vector<vector<int>>ans;
        ans.push_back(points[0]);
        int l= points[0][0], r= points[0][1];
        for(int i=1; i<n;i++){
            if(points[i][0]<=r){
                ans.back()[1]= min(points[i][1], ans.back()[1]);
                r= ans.back()[1];
            }
            else {
                ans.push_back(points[i]);
                l=points[i][0], r= points[i][1];
            }
        }

        return ans.size();
    }
};

// 9 min