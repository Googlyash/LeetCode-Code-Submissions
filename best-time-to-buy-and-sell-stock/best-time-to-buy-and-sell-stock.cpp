//Striver Day1
//Earlier Self-resolved
//Comments- Back Traversal

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0,n=prices.size();
        int  hisell=prices[n-1];
        for(int i=n-1;i>=0;i--){
            if(prices[i]>hisell){
                hisell=prices[i];
            }
            else
            {
                pro=max(pro,hisell-prices[i]);
            }
        }
        return pro;
    }
};