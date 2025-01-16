// Jan'16, 2025 04:14 pm

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n= prices.size(), buy= INT_MIN, sell=0;

        for(int i=0;i<n;i++){
            buy= max(buy, sell - prices[i]);

            sell= max(sell, buy+ prices[i]-fee);
        }
        return sell;
    }
};

// 12 min