//POTD Sep'14, 2023 
//Sep'14, 2023 05:40 pm


class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        int n=tickets.size();
        unordered_map<string, vector<string>>adj;

        for(int i=0;i<n;i++){
            adj[tickets[i][0]].push_back(tickets[i][1]);
        }
        for(auto& [_, dest]: adj){
            sort(dest.rbegin(), dest.rend());
        }
        stack<string>st;
        st.push("JFK");

        vector<string>ans;
        while(!st.empty()){
            string src=st.top();

            if(adj.find(src)!=adj.end() && !adj[src].empty()){
                st.push(adj[src].back());
                adj[src].pop_back();
            }
            else {
                ans.push_back(src);
                st.pop();
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//Comments: 50 Min