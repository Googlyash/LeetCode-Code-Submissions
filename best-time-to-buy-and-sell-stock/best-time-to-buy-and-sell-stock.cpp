class Solution {
public:
    int maxProfit(vector<int>&v) {
        int l=INT_MAX;
        int p=0,prof=0;

        for(int i=0;i<v.size();i++)
        {
            if(v[i]<l)l=v[i];

            prof=v[i]-l;
            if(p<prof)p=prof;
        }
        return p;
    }
};