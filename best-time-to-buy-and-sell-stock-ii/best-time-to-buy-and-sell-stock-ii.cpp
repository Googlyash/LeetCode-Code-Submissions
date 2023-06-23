//Self-solved Method2- front-traversal

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int pro=0,losell=prices[0],currpro=0;
        for(int i=0;i<n;i++){
            if(prices[i]>losell){
                pro+=prices[i]-losell;
            }
            losell=prices[i];
        }
        return pro+currpro;
    }
};