// Jan'23, 2025 09:01 pm

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n= word1.size(), m= word2.size();

        if(n!=m){
            return false;
        }

        map<int, int>mp1, mp2;
        for(auto it:word1)mp1[it]++;
        for(auto it:word2)mp2[it]++;
        
        vector<int>v1, v2, w1, w2;
        for(auto it:mp1){
            v1.push_back(it.second);
            w1.push_back(it.first);
        }
        for(auto it:mp2){
            v2.push_back(it.second);
            w2.push_back(it.first);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        return v1==v2 && w1==w2;
    }
};

// 25 min