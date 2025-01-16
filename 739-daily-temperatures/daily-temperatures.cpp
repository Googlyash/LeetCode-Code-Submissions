// Jan'16, 2025 10:29 am

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n= temperatures.size();
        stack<int>st;
        st.push(temperatures[n-1]);
        vector<int>ans(n, 0);
        map<int, int>mp;
        mp[temperatures[n-1]]= n-1;
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top()<=temperatures[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]= mp[st.top()]-i;
            }
            mp[temperatures[i]]= i;
            st.push(temperatures[i]);
        }

        return ans;
    }
};

// 4 min