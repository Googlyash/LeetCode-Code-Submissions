// POTD May'24, 2025
// May'24, 2025 10:10 pm

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n=words.size();
        vector<int>ans;

        for(int i=0;i<n;i++){
            string s= words[i];
            for(auto c:s){
                if(c==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};

// 2 min