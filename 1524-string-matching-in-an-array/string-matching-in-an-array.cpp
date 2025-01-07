// POTD Jan'7, 2025
// Jan'7, 2025 06:00 pm

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n= words.size();
        map<string, int>mp;
        vector<string>ans;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && words[i].find(words[j])!= string::npos && mp.find(words[j])== mp.end()){
                    ans.push_back(words[j]);
                    mp[words[j]]++;
                }
            }
        }

        return ans;
    }
};

// 5 min