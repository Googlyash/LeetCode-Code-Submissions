//Striver
//Self
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int n=intervals.size(),k=0, tend= intervals[0][1];
        vector<vector<int>>v(1);
        v[0].push_back(intervals[0][0]);
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=tend ){
                tend=max(tend,intervals[i][1]);
            }
            else
            {
                v[k].push_back(tend);
                k++;
                v.push_back({});
                v[k].push_back(intervals[i][0]);
                tend=max(tend,intervals[i][1]);
            }
        }
        tend=max(tend,intervals[n-1][1]);
        v[k].push_back(tend);
        return v;
    }
};