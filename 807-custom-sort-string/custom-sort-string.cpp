//POTD Mar'11, 2024
//Mar'11, 2024 11:57 pm
class Solution {
public:
    string customSortString(string order, string s) {
        int n=order.size(), strt=0;
        string ans;
        map<char, int>mp, mp1;
        for(auto it:order){
            mp[it]=0;
        }
        for(auto it:s){
            if(mp.find(it)!=mp.end()){
                mp[it]++;
            }
        }
        for(auto it:order){
            ans.append(mp[it],it);
        }
        for(auto it:s){
            if(mp.find(it)==mp.end()){
                ans+=it;
            }
        }
        return ans;
    }
};

//14 min