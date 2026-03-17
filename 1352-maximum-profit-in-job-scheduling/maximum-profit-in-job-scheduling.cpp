// Mar'17, 2026 09:48 pm
// DP Practice

class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n= profit.size();
        vector<vector<int>>jobs;

        for(int i=0;i<n;i++){
            vector<int>v= {endTime[i], startTime[i], profit[i]};
            jobs.push_back(v);
        }
        sort(jobs.begin(), jobs.end());

        vector<int>dp(n+1, 0);
        for(int i=0;i<n;i++){
            int startt= jobs[i][1];
            int endt= jobs[i][0];
            int pro= jobs[i][2];

            int lastNonCollidingInd= upper_bound(jobs.begin(), jobs.end(), startt, [&](int time, const auto& job){
                return time < job[0];
            }) - jobs.begin();

            dp[i+1]= max(dp[i], dp[lastNonCollidingInd]+ pro);
        }
        return dp[n];
    }
};

// 20 min
// Comments