// Mar'15, 2026 10:33 pm
// Intervals Practice

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n= intervals.size();

        vector<vector<int>>mergedInt;
        sort(intervals.begin(), intervals.end());
        int start= intervals[0][0], end= intervals[0][1];
        for(int i=1;i<n; i++){
            if(end>= intervals[i][0]){
                start= min(start, intervals[i][0]);
                end= max(end, intervals[i][1]);
            }
            else {
                mergedInt.push_back({start, end});
                start= intervals[i][0];
                end= intervals[i][1];
            }
        }
        mergedInt.push_back({start, end});
        return mergedInt;

    }
};

// 6 min