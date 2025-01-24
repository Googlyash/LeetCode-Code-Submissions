// Jan'24, 2025 03:53 pm

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n= points.size();
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            int x= points[i][0];
            int y= points[i][1];
            v.push_back({(x*x+y*y), i});
        }
        sort(v.begin(), v.end());
        vector<vector<int>>ans;
        for(int i=0;i<k;i++){
            int x= points[v[i][1]][0];
            int y= points[v[i][1]][1];
            ans.push_back({x,y});
        }

        return ans;
    }
};

// 4 min