// Jan'16, 2025 11:53 am

class StockSpanner {
    stack<pair<int, int>>st;
    int i=0;
    int price;
public:
    StockSpanner() {
        // int price;
        // StockSpanner* nextp;
    }
    
    int next(int price) {

        int ans=1;
        while(!st.empty() && price>= st.top().first){
            st.pop();
        }
        if(!st.empty()){
            ans= i- st.top().second;
            st.push({price, i++});
        }
        else if(st.empty()){
            st.push({price, i++});
            ans=i;
        }
        return ans;
    }
};

// 18 min

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */