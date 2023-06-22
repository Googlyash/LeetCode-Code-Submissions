//Striver Day1
//Self-resolved

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0,mnbuy=INT_MAX;
        for(int i=0;i<prices.size();i++){
            pro=max(pro,prices[i]-mnbuy);
            mnbuy=min(mnbuy,prices[i]);
        }
        return pro;
    }
};