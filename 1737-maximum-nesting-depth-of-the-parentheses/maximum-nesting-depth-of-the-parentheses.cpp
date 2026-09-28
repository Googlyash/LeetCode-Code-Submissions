// POTD Sep'28, 2026
// Sep'28, 2026 09:48 pm

class Solution {
public:
    int maxDepth(string s) {
        int n= s.size();

        int cnt=0, ans=0;
        for(auto c: s){
            if(c=='('){
                cnt++;
            }
            else if(c==')'){
                cnt--;
            }
            ans=max(ans, cnt);
        }
        return ans;
    }
};

// 2 min