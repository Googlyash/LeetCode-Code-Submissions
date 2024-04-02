//POTD Apr'2, 2024
//Apr'2, 2024 11:28 pm

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size(), m=t.size();

        if(n!=m){
            return 0;
        }
        map<char, vector<int>>mp, mp1;
        vector<vector<int>>v, a;
        for(int i=0;i<n;i++){
            char it=s[i];
            mp[it].push_back(i);
        }
        for(auto it:mp){
            v.push_back(it.second);
        }
        sort(v.begin(), v.end());

        for(int i=0;i<n;i++){
            char it=t[i];
            mp1[it].push_back(i);
        }
        for(auto it:mp1){
            a.push_back(it.second);
        }
        sort(a.begin(), a.end());

        for(auto it:a){
            for(auto it1: it){
                cout<<it1<<" ";
            }
            cout<<"\n";
        }
        return v==a;
    }
};

//8 min
//"bbbaaaba"
//"aaabbbba"