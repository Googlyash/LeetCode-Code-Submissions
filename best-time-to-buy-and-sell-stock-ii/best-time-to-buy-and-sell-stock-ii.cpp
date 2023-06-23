//Self-solved

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int pro=0,hisell=prices[n-1],currpro=0;
        for(int i=n-1;i>=0;i--){
            if(prices[i]> hisell){
                hisell=prices[i];
                pro+=currpro;
                currpro=0;
            }
            else{
                currpro+=hisell-prices[i];
                hisell=prices[i];
            }
        }
        return pro+currpro;
    }
};