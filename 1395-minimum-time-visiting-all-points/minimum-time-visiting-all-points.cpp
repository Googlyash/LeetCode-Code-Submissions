//POTD Dec'3, 2023
//Dec'3, 2023 11:21 pm

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0, n=points.size();
        for(int i=0;i<n-1;i++){
            int cur= min(abs(points[i][1]-points[i+1][1]), abs(points[i][0]-points[i+1][0]));
            ans+=cur;
            ans+=max(abs(points[i][1]-points[i+1][1]), abs(points[i][0]-points[i+1][0]))-cur;
        }
        return ans;
    }
};

//7 mins