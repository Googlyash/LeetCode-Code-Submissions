//POTD Jul'9, 2024
//Jul'9, 2024 11:34 pm

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        long long n=c.size(), tot=0, cur=c[0][0] ;
        double ans=0;

        for(int i=0;i<n;i++){
            cur=c[i][1]+ max(cur, (long long)c[i][0]);
            tot+= cur-c[i][0];
        }

        ans= (double)tot/(double)n;
        return ans;
    }
};