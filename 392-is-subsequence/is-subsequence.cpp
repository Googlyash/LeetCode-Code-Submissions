//Sep'11, 2023 04:56 pm

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.size(), m=s.size();
        int ans=0, i1=0;
        for(int i=0;i<n;i++){
            if(t[i]==s[i1]){
                i1++;
            }
            if(i1==m)return true;
        }
        return i1==m;
    }
};