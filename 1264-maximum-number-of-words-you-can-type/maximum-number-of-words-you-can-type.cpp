// POTD Sep'15, 2025
// Sep'15, 2025 10:30 pm

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n= text.size(), ans=0;
        unordered_map<char, int>mp;

        for(auto c: brokenLetters){
            mp[c]++;
        }

        string s;
        bool flag=1;
        for(int i=0;i<n;i++){
            s+= text[i];
            if(text[i]==' '){
                s.clear();
                if(flag){
                    ans++;
                }
                flag=1;
            }

            if(mp.find(text[i])!=mp.end()){
                flag=0;
            }
        }
        if(flag){
            ans++;
        }
        return ans;
    }
};

// 5 min