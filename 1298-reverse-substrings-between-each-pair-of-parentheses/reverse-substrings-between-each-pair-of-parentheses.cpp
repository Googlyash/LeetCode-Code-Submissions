// POTD Sep'27, 2026
// Sep'28, 2026 02:16 am

class Solution {
    pair<string, int> did(string s, int i){
        int n= s.size();

        string s1;
        for(i;i<n;i++){
            if(s[i]=='('){
                pair<string, int>p= did(s, i+1);
                s1+=p.first;
                i=p.second;
            }
            else if(s[i]!=')'){
                s1+= s[i];
            }
            else {
                reverse(s1.begin(), s1.end());
                cout<<s1<<" "<<i<<endl;
                return {s1, i};
            }
        }
        return {s1, n-1};
    }
public:
    string reverseParentheses(string s) {
        int n= s.size();

        return did(s, 0).first;
    }
};

// 20 min