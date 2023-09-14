//POTD Sep'14, 2023 
//Sep'14, 2023 06:40 pm


class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        int n=tickets.size();
        unordered_map<string, multiset<string>>adj;
        stack<string>st;

        for(int i=0;i<n;i++){
            adj[tickets[i][0]].insert(tickets[i][1]);
        }
        st.push("JFK");

        vector<string>ans;
        while(!st.empty()){
            string src=st.top();

            if(adj[src].size()==0){
                ans.push_back(src);
                st.pop();
            }
            else {
                auto dest= (adj[src].begin());
                st.push(*dest);
                adj[src].erase(dest);

            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//Comments: 50 Min