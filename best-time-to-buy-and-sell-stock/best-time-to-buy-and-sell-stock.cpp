class Solution {
public:
    int maxProfit(vector<int>&v) {
        int buy=INT_MAX;
        int prof=0;

        for(int i=0;i<v.size();i++)
        {
            buy=min(buy,v[i]);
            prof=max(prof, v[i]-buy);
        }
        return prof;
    }
};