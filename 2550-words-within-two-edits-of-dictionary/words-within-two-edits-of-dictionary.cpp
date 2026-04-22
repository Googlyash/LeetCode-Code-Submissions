// POTD Apr'22, 2026
// Apr'23, 2026 12:25 am

class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;

        for(auto s: queries){
            for(auto it: dictionary){
                int change=0;

                int n= s.size();
                int m= it.size();
                if(n!=m){
                    continue;
                }
                for(int i=0;i<n;i++){
                    change+= s[i]!=it[i];
                }
                if(change<3){
                    ans.push_back(s);
                    break;
                }
            }
        }
        return ans;
    }
};

// 11 min
