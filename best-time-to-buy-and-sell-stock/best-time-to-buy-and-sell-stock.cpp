//Striver Day1
//Self-resolved (method2)- Back Traversal

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0,n=prices.size();
        int  hisell=prices[n-1];
        for(int i=n-1;i>=0;i--){
            hisell=max(hisell,prices[i]);
            pro=max(pro,hisell-prices[i]);
        }
        return pro;
    }
};