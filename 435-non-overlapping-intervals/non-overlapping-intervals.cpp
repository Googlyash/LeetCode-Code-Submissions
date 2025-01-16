// Jan'16, 2025 12:22 pm

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n= intervals.size();

        sort(intervals.begin(), intervals.end());
        int cnt= 0;
        
        int r= intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<r){
                r= min(intervals[i][1], r);
                cnt++;
            }
            else {
                r= intervals[i][1];
            }
        }

        return cnt;
    }
};

// 7 min