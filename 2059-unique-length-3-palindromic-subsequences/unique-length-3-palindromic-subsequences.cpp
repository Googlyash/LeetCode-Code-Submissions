//POTD Nov'14, 2023
//Nov'14, 2023 04:09 pm

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.size(), ans=0;
        vector<pair<int, int>>v(26);
        for(int i=0;i<n;i++){
            v[s[i]-'a'].second=i;
        }
        for(int i=n-1;i>=0;i--){
            v[s[i]-'a'].first=i;
        }
        for(int i=0;i<26;i++){
            int l=v[i].first+1, r=v[i].second;
            set<int>st;
            while(l<r){
                st.insert(s[l++]-'a');
            }
            ans+=st.size();
            st.clear();
        }
        return ans;
    }
};